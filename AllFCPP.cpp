#include <iostream>
#include <string>
#include <cmath>
#include"HeaderFile.h"
#include <fstream>

using namespace std; //if don't write this every time we should write as "std::cout"




//Functions DECLARATION
int Sum(int a, int b);
double Sum(double a, double b);
void myString(string name="FM");
void myLove(string name1, int a, string name2);
void SwapNums(int &a, int &b);
void SwapNums2(int a, int b);
int myReturn(int &x);
void myArraylist(int Arraylist[],int length);
int myRecursion(int k);

//classfuction
void classfuncalled();



//Structures

//M01
struct myStruct
{
	int num;
	string mystring;
};

//M02
struct myCar
{
	int numcar;
	string mycarstring;
}Faticar, Asmacar;

//M03
struct 
{
	int year;
	string name;
}Bday;

//Classes

//public - members are accessible from outside the class
//private - members cannot be accessed(or viewed) from outside the class
//protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.You will learn more about Inheritance later.

//https://www.w3schools.com/CPP/cpp_class_methods.asp

//It is possible to access private members of a class using a public method inside the same class


class Myclass01
{
public:	Myclass01()
	{
		cout << endl << "calling from constructer01";
	}
	
	

public :
	void myfunpub01()
	{
		cout << endl << "Hello classe01 public";
	}

private : 
	void myfunpri01()
	{
		cout << endl << "Hi this is private01";
	}

protected : 
	void myfunpro01()
	{
		cout << endl << "Hi this is  protected01";
	}
public:
	void callpri01()
	{
		myfunpri01(); 
	}
	
};


class Myclass02:public Myclass01
{
public :
	Myclass02()
	{
		cout << endl << "calling from constructer02";
	}

public:
	void callpub02()
	{
		myfunpub01();
	}

	void callpri02() //Public
	{
		//myfunpri01();  //error
		callpri01();
	}

	void callpro02() //Public
	{
		myfunpro01();
	}
};

//constructer and distructer
class Myclass
{
public :
	int x;
private :
	int y;
protected :
	int z;
public:
	static int countS;
	int mynum;
	string mystringclass;
	Myclass01 myc01;
	Myclass02 myc02;
	Myclass()  //constructer
	{
		cout << endl << "Hello Classes.....Constructer executes  ";
		cout << endl << "this this this";
		x = 1;
		y = 1;
		z = 1;

	}
	

	Myclass(int x)
	{
		cout << endl << "this this this";
		this->x = x;
		this->y = x;
		this->z = x;

	}

	~Myclass() //distructer
	{
		cout << endl << "Pehli fursath me nikal....Distructer executed ";

	}
};
int Myclass::countS = 0; // static


class Fundec
{
public:
	void classfun();
		
};

class Car
{
public :
	string brand;  // Attribute(int float string...)
	string model;  
	int year;      
	Car(string x, string y, int z)  // Constructor with parameters
	{
		brand = x;
		model = y;
		year = z;
	}
};


class Car02 
{        
public:  // Access specifier        
	string brand;  
	string model;  
	int year;     
	Car02(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car02::Car02(string x, string y, int z) 
{
	brand = x;
	model = y;
	year = z;
}

//Encapsulation:
//To access a private attribute, use public "get" and "set" methods:
class Employee 
{
private:
	// Private attribute
	int salary;

public:
	// Setter
	void setSalary(int s) 
	{
		salary = s;
	}
	// Getter
	int getSalary() 
	{
		return salary;
	}
};


class Employeepro 
{
protected: // Protected access specifier
	int salary;
};

// Derived class
class Programmer : public Employeepro 
{
public:
	int bonus;
	void setSalary(int s)
	{
		salary = s;
	}
	int getSalary() 
	{
		return salary;
	}
};






  ////Multiple inheritance

// Base class (parent)
class MyBaseClass
{
public:
	void myFunction() 
	{
		cout << endl << "Some content in parent class.";
	}
};

// Derived class (child)
class MyChild : public MyBaseClass
{
};

// Derived class (grandchild)
class MyGrandChild : public MyChild 
{
};





class Myfatherclass 
{
public:
	void myFunction() 
	{
		cout <<endl <<  "Some content in parent class.";
	}
};

class Mymotherclass 
{
public:
	void myOtherFunction() 
	{
		cout << endl << "Some content in another class.";
	}
};

class Mychildclass:public Myfatherclass,public Mymotherclass
{

};



////C++ Polymorphism
// Base class
class Animal 
{
public:
	void animalSound() 
	{
		cout << "The animal makes a sound \n";
	}
};

// Derived class
class Pig : public Animal 
{
public:
	void animalSound() 
	{
		cout << "The pig says: wee wee \n";
	}
};

// Derived class
class Dog : public Animal 
{
public:
	void animalSound() 
	{
		cout << "The dog says: bow wow \n";
	}
};





int main()
{
	
	classfuncalled();
	//File Management
	//https://www.w3schools.com/CPP/cpp_files.asp

	ofstream MyFile("filetestFcpp.txt");//// Create and open a text file

   // Write to the file
	MyFile << endl << " Welcome Files , it is fun enough!";
	MyFile << endl << "Hello File this is C++";
	MyFile << endl << "Hello File World!\t";
	MyFile << endl <<  " File I am learning C++";


	//close
	MyFile.close();

	////////////////////////////
	cout << endl << "Hello this is C++";
	//endl=\n (newline)


	//  "\t"	Creates a horizontal tab
	cout << endl<<"Hello World!\t";
	cout << "I am learning C++";
	//  \\	Inserts a backslash character (\)
	//  \"	Inserts a double quote character
	//  Multi-line comments start with /* and ends with */.
	

	// VARIABLES
	

	/*boolean = 1 byte
	char =	1 byte
	int	 = 2 or 4 bytes
	float =	4 bytes
	double	 = 8 bytes*/


	/*int myNum = 5;
	double myFloatNum = 5.99;    
	char myLetter = 'D';         
	string myText = "Hello";    
	bool myBoolean = true;*/

	int myNum;
	myNum = 15;
	myNum = 10;
	cout << endl<< myNum; //output will be 10

	float myNumf = 5.75;
	cout << myNumf;

	float f1 = 35e3;
	double d1 = 12E4;
	cout << f1 << "\n";
	cout << d1;

	bool isCodingFun = true;
	bool isFishTasty = false;
	cout << isCodingFun << "\n";
	cout << isFishTasty;

	int xx = 10;
	int yy = 9;
	cout << (xx > yy);


	char myGrade = 'B';  //in C and C ++ char should in  '' not in ""
	cout << endl << myGrade;

	string greeting = "Hello";
	cout <<  endl << greeting;

	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName + lastName;
	cout << fullName;
    // If you try to add a number to a string, an error occurs:

	int x = 5;
	int y = 6;
	int sum = x + y;
	cout << endl<< sum;

	int sum1 = 100 + 50;        // 150 (100 + 50)
	int sum2 = sum1 + 250;      // 400 (150 + 250)
	int sum3 = sum2 + sum2;     // 800 (400 + 400)
	cout << endl << sum1 << "\n";
	cout << endl << sum2 << "\n";
	cout << sum3;


	int x1 = 5, y1 = 6, z1 = 50;
	cout << endl<< x1 + y1 + z1;

	//C++ Operators
	//https://www.w3schools.com/CPP/cpp_operators.asp

	//C++ Assignment Operators
	//https://www.w3schools.com/CPP/cpp_operators_assignment.asp

	//C++ Comparison Operators
	//https://www.w3schools.com/CPP/cpp_operators_comparison.asp

	//C++ Logical Operators
	//  &&  >>  and  
	//  ||  >> or
	//   !  << not

	//constants
	//const int z = 10;
	


	//user input 
	/*int a, b;
	int addition;
	cout << endl <<  "1st num : ";
	cin >> a;
	cout << "2nd num : ";
	cin >> b;
	addition = a + b;
	cout << endl <<  "Addition is " << addition;*/

	// Length

	string txt = "ABCDEFGHI";
	cout << endl << "The length of the txt string is: " << txt.length();

	string myString2 = "Hello";
	myString2[0] = 'J';
	cout << myString2;

	//C++ <cmath> Header
	//https://www.w3schools.com/CPP/cpp_math.asp
	cout << endl << "sqrt is : " << sqrt(64);
	cout << endl << "round is : " <<  round(2.6);
	cout << endl << "log is : " << log(2);


	//If else elseif

	int xi = 20;
	int yi = 18;
	if (xi > yi) 
	{
		cout << endl <<  "xi is greater than yi";
	}



	int time = 20;
	if (time < 18) 
	{
		cout <<  endl << "Good day.";
	}
	else 
	{
		cout << endl << "Good evening.";
	}


	int time2 = 18;
	if (time2 < 10) 
	{
		cout << endl << "Good morning.";
	}
	else if (time2 < 20) 
	{
		cout << endl << "Good day.";
	}
	else 
	{
		cout << endl << "Good evening.";
	}

    
	//C++ Short Hand If Else
	int time3 = 20;
	string result3 = (time3 < 18) ? "Good day." : "Good evening.";
	cout <<  endl << result3;


	//switch
	int day = 4;
	switch (day)
	{
	case 1:
		cout << endl <<  "Monday";
		break;
	case 2:
		cout << endl << "Tuesday";
		break;
	case 3:
		cout << endl << "Wednesday";
		break;
	case 4:
		cout << endl << "Thursday";
		break;
	case 5:
		cout << endl << "Friday";
		break;
	default:
		cout <<  endl << "Looking forward to the Weekend";
	}


	//while loop 
	int w = 0;
	cout << endl << "This is while loop";
	while (w < 5)
	{
		cout << endl << w;
		w++;
	}

	//do while
	int d = 0;
	do 
	{
		cout << endl << d;
		d++;
	} while (d < 5);


	//For Loop
	cout << endl << "Hi For Loop";
	for (int i = 1;i <= 10;i += 2)
	{
		cout << endl << i;
	}
    
	// Break and Continue
	cout << endl << " Break and Continue" << endl ;
	cout << endl << " Break ";
	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			break;
		}
		cout << i << "\n";
	}


	cout << endl << " Continue ";

	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			continue;
		}
		cout << i << "\n";
	}

	///Array
	
	string bikes[4] = { "Volvo", "BMW", "Ford", "Mazda" };
	bikes[0] = "opel";
	cout << endl << bikes[0];
	cout << endl << "Hi Array";
	for (int i = 0; i < 4; i++)
	{
		cout << endl << i << ":" << bikes[i];

	}

	string cars3[5] = { "Volvo", "BMW", "Ford" };// size of array is 5, even though it's only three elements inside it
	cars3[3] = "Mazda";
	cars3[4] = "Tesla";

	//M02
	/*string cars4[3];
	cars4[0] = "Volvo";
	cars4[1] = "BMW";
	cars4[2] = "Ford";
	cars4[3] = "Mazda";
	
	for (int i = 0; i < 4; i++)
	{
		cout << endl << cars4[i] << "\n";

	}*/

	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	int getArrayLength = sizeof(myNumbers) / sizeof(int);
	cout << endl << "Length of array";
	cout << endl << getArrayLength;

	//Multi dimensional array 
	//https://www.w3schools.com/CPP/cpp_arrays_multi.asp
	//Practice above one

	string letters[2][4] = 
	{
	
		{ "A", "B", "C", "D" },
	
		{ "E", "F", "G", "H" }
	};

	cout << endl << letters[0][2];


	string letters2[2][4] = 
	{
	
		{ "A", "B", "C", "D" },
	
		{ "E", "F", "G", "H" }
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout <<  endl << letters2[i][j] << "\n";
		}
	}







	//FUNCTIONS
	cout<<endl<<Sum(4,5);
	cout << endl << Sum(4.5, 5.5);
	myString("FatiMuz");
	myString();
	myLove("Fati", 143 , "Muz");


	int firstnum = 2;
	int secondnum = 3;
	cout << endl << "Before swap";
	cout << endl << firstnum << secondnum;
	SwapNums(firstnum, secondnum);
	cout << endl << "After swap";
	cout << endl << firstnum << secondnum;


	firstnum = 2;
	secondnum = 3;
	cout << endl << "Before swap2";
	cout << endl << firstnum << secondnum;
	SwapNums2(firstnum, secondnum);
	cout << endl << "After swap2";
	cout << endl << firstnum << secondnum;


	int myx = 10;
	int myvalue = myReturn(myx);
	cout << endl << myvalue;
	cout << endl << myx;

	int mylist[] = { 10,20,30,40,50,60 };
	myArraylist(mylist, sizeof(mylist) / sizeof(mylist[0]));

	int recursion = myRecursion(5);
	cout << endl << recursion;


	//Srtuctures
	//https://www.w3schools.com/CPP/cpp_structs.asp
    
	//M01

	struct myStruct myS01;
	myS01.num = 143;
	myS01.mystring = "FM";

	cout << endl << myS01.num << myS01.mystring;
    
	myStruct myS02;
	myS02.num = 1432;
	myS02.mystring = "FMAK";
	myS02.mystring = "FMAK";


	//M02

	Faticar.numcar = 123;
	Asmacar.mycarstring = " Super car";
	cout << endl << Faticar.numcar << Asmacar.mycarstring;

	//M03
	Bday.year = 2002;
	Bday.name = "\tShaik";
	cout << endl << Bday.year <<  Bday.name;

	
	//REFERENCES
	string food = "Pizza";
	string &meal = food;
	cout << endl << &food;
	cout << endl << &meal;
	

	//POINTER
	//https://www.w3schools.com/CPP/cpp_pointers.asp
	
	string food2 = "Burger";
	string* ptr = &food2; // * stores address of food2(int/string/float/any data type)
	string** ptr2 = &ptr; // ** stores address of pointer
	cout << endl << food2;
	cout << endl << &food2;
	cout << endl << ptr;
	cout << endl << *ptr;//*ptr gives main value of food2
	cout << endl << &ptr;// &ptr is address of ptr
	cout << endl << ptr2;// &ptr is address of ptr


	//Classes 
	cout << endl << "CLASSES HERE";
	
	Myclass myc;
	myc.mynum = 6;
	myc.mystringclass = "Fatima";

	cout << endl << "CLASSES01 HERE";

	Myclass01 myc01;
	myc01.myfunpub01();
    

	cout << endl << "CLASSES02 HERE";

	Myclass02 myc02;
	myc02.callpub02();
	myc02.callpri02();
	myc02.callpro02();

	cout << endl << "CLASS Fundec HERE";
	Fundec mydec;
	mydec.classfun();

	cout << endl << "CLASS CAR HERE";
	Car carObj1("BMW\t","YY\t",2002);
	cout << endl <<  carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

	Car carObj2("Ford", "Mustang", 1969);
	cout << endl << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

	Employee myObj;
	myObj.setSalary(50000);
	cout <<endl <<  myObj.getSalary();

	MyGrandChild mymulti;
	mymulti.myFunction();

	Mychildclass mycc;
	mycc.myFunction();
	mycc.myOtherFunction();

	cout << endl;
	Programmer mypro;
	mypro.setSalary(50000);
	mypro.bonus = 15000;
	cout << "Salary: " << mypro.getSalary() << "\n";
	cout << "Bonus: " << mypro.bonus << "\n";

	cout << endl;

	Animal myAnimal;
	Pig myPig;
	Dog myDog;

	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();

	cout << endl << "CONSTRUCTER AND DISTRUCTER";

	Myclass myCHECK; 



	/////C++ Exceptions
	//https://www.w3schools.com/CPP/cpp_exceptions.asp


	try
	{
		int age = 20;
		if (age >= 25)
		{
			cout << endl << "try success";
			cout << endl << "age is : " << age;

		}
		else
		{
			throw(age);
		}
	}
	catch (int value)
	{
		cout << endl << "catch success";
		cout << endl << "age is : " << value;
	}

	////


	try 
	{
		int age2 = 15;
		if (age2 >= 18) 
		{
			cout <<endl <<  "Access granted - you are old enough.";
		}
		else 
		{
			throw 505;//505 will be in place of myNum variable
		}
	}
	catch (int myNum) 
    {
		cout << endl << "Access denied - You must be at least 18 years old.\n";
		cout << endl << "Error number: " << myNum;
	}
	////If you do not know the throw type used in the try block, you can use the "three dots" syntax (...)

	try 
	{
		int age3 = 143;
		if (age3 >= 143) 
		{
			cout << endl <<  "Access granted - you are old enough.";
		}
		else 
		{
			throw 505;
		}
	}
	catch (...) 
	{
		cout <<  endl << "Access denied - You must be at least 18 years old.\n";
	}


	///////HEADER PRACTICE
	cout << endl  << endl << " Hi i am Header";
	HeaderC01 myh01;
	myh01.SumH(6,4);

	HeaderC02 myh02;
	myh02.myStringH();

	HeaderC03 myh03;
	HeaderC03 myh03int(4);
	myh03.Subtract(6, 4);

	//
	int num1 = 23;
	int num2 = 45;
	SwapNumsH(num1, num2);

	//
	myCarH FaticarH;
	FaticarH.mycarstringH = "ABC";
	cout << endl << FaticarH.mycarstringH;


	// Static
	Myclass myc001;
	Myclass myc002;
	Myclass myc003;

	myc001.mynum = 10;
	myc002.mynum;
	myc003.mynum;



	myc001.countS = 143;
	myc002.countS;
	myc003.countS;

	myc001.countS ;
	myc002.countS = 123;//yaha badlaye kato sab ki change hojati even 143 changes to 123
	myc003.countS;


   ///////////////////////////
	cout << endl;
	system("pause");
	return 0;


}

//Functions DEFINATION

double Sum (double a, double b)
{
	cout << endl << "i am in SUM";
	return a + b;

}


int Sum(int a, int b)
{
	cout << endl << "i am in SUM";
	return a + b;
}

void myString(string name)
{
	cout << endl << name;
}

void myLove(string name1, int a, string name2)
{
	cout << endl << name1 << a << name2;
}

void SwapNums(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
	cout << endl << "swaped a and b";
	cout << endl << "a = " << a;
	cout << endl << "b = " << b;

}


void SwapNums2(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	cout << endl << "swaped2 a and b";
	cout << endl << "a = " << a;
	cout << endl << "b = " << b;

}

int myReturn(int &x)
{
	int a = 5 + x;
	int b = 10 + x;
	x = b;
	cout << endl << "my Return";
	return a;
}


void myArraylist(int Arraylist[],int length)
{
	cout << endl << "Hi Array";

	for ( int i = 0; i < length; i++)
	{
		cout << endl << Arraylist[i];
	}
}

int myRecursion(int k)
{
	cout << endl << "k :: "<< k;
	if (k > 0)
	{
		return k + myRecursion(k - 1);
	}
	else
	{
		cout << endl;
		return 0;
	}
}

//functions for classes
void Fundec::classfun()
{
	cout << endl << "Hi this is class function";
}

void classfuncalled()
{
	cout << endl << "Hi this is classfuncalled";

	//using other functions 
	cout << endl << "Hi this is Sum(5.5, 6.6)  "<< Sum(5.5, 6.6);

	Myclass myc02;
	cout << endl << "Myclass called";
	myc02.myc01.callpri01();

		
}
