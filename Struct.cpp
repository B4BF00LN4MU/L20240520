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

//0~255, for CPU // 512 혹은 1024 쓰면 또 바꿔야 됨
//photoshop
struct Color
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
};

////0 ~ 1% Percent //Led 밝기, for GPU
//struct Color
//{
//	float R; // 0.8*255= 이런식으로
//	float G;
//	float B;
//};

int main()
{
	Actor* Player=new Actor;

	//(*Player).Position.X; 아래랑 같은 의미
	Player->Position.X = 10;
	Player->Position.Y = 10;
	Player->Shape = 'p';
	Player->name = "바보";

	cout << Player->Position.X << endl;

	return 0;//0
}