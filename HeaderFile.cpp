#include<iostream>
#include<string>
using namespace std;
#include"HeaderFile.h"

//Functions for classes

int HeaderC01::SumH(int a, int b)
{
	cout << endl << "i am in Header class01 ";
	return a + b;
}

void HeaderC02::myStringH(string name)
{
	cout << endl << name;
}

void HeaderC03::Subtract(int a, int b)
{
	int c = a - b;
	cout << endl << "Subtraction is : " << c;
}

//Functions

void SwapNumsH(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
	cout << endl << "swaped a and b";
	cout << endl << "a = " << a;
	cout << endl << "b = " << b;

}

//
myCarH FaticarH, AsmacarH;