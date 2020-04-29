#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#define MSG_SIZE 50
class Printer {

private:
	char message[MSG_SIZE];

public:
	void SetString(char* s);
	void ShowString();
};

void Printer::SetString(char* s)
{
	strcpy(message, s);
}

void Printer::ShowString()
{
	cout << message << endl;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}