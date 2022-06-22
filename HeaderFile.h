#include<string>
using namespace std;
//classes
class HeaderC01
{
public:
	int SumH(int a, int b);
};

class HeaderC02
{
public:
	void myStringH(string name = "FM");
};

class HeaderC03
{
public:
	HeaderC03()
	{
		cout << endl << "This is Constructer of Header";
	}

	HeaderC03(int x)
	{
		cout << endl << "This is Constructer x  of Header :" << x;
	}

	void Subtract(int a, int b);
};

//Functions

void SwapNumsH(int &a, int &b);


//structures
struct myCarH
{
	int numcarH;
	string mycarstringH;
};
