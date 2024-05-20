#include<iostream>
#include<string>

using namespace std;;

int main()
{
	char H[5] = { 'H','E','L','L','o' };
	for (int i = 0; i < 5; ++i)
	{
		cout << H[i];
	}
	cout << endl;

	char M[6] = { "HELLO" };

	cout << M << endl;
	return 0;
}