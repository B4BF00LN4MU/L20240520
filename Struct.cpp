#include <iostream>

using namespace std;

//custom DataType
struct Vector2D
{
	int X;
	int Y;
};

struct Actor
{
	Vector2D Position{0,0};
	char Shape = 0;
	string name = { 0 };
};

//0~255, for CPU // 512 Ȥ�� 1024 ���� �� �ٲ�� ��
//photoshop
struct Color
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
};

////0 ~ 1% Percent //Led ���, for GPU
//struct Color
//{
//	float R; // 0.8*255= �̷�������
//	float G;
//	float B;
//};

int main()
{
	Actor* Player=new Actor;

	//(*Player).Position.X; �Ʒ��� ���� �ǹ�
	Player->Position.X = 10;
	Player->Position.Y = 10;
	Player->Shape = 'p';
	Player->name = "�ٺ�";

	cout << Player->Position.X << endl;

	return 0;//0
}