#include<stdio.h>
#include<math.h>

//Funbtions Declaration
void Gap();
void Gap2(int num);
void Function(char name[], int age);
int myFunction(int x, int y);
int Recursion(int k);



//Structures
struct FMstruct
{
	int Num;
	char Letter;
	char string[30];

};



void main2()
{
	printf("\n Hello Fatima");
	printf("\n Hi Everyone\n This is C language ");
    
	//scanf
     /*int num;
	printf("Type a number: \n");
	scanf_s("%d", &num);
	printf("Your number is: %d", num);*/



	//Variables
	int myNum;
	myNum = 123;
	printf("\n integer is %i", myNum);

	float myfloat;
	myfloat = 123.12345678;
	printf("\n float is %f", myfloat);
	printf("\n float is %.3f", myfloat);

	char myLetter;
	myLetter = 'M';
	printf("\n char is %c", myLetter);

	printf("\n int is %i and char is %c", myNum, myLetter);

	int x = 1;
	int y = 2;
	int sum = x + y;
	printf("\n sum is %d ", sum);

	//Constants
	const int Bday = 2002;
		 
	//const int Bday;
	//Bday = 2002;  //this won't work


	// ++x1 or x1++  >> x1=x1+1;
	// ++x1  add then show/implement
	// x1++  show/implement then add 

	x = 5;
	x += 4;
	printf("\n %d", x);

	y = 3;
	printf("\n y is  %d", y);
	printf("\n y++ is %d", y++);
	printf("\n y is %d", y);

	 int y1 = 5;
	printf("\n y1 is  %d", y1);
	printf("\n ++y1 is %d", ++y1);
	printf("\n y1 is %d", y1);

	int a;
	a = 10;
	if (a % 5 == 0 && a % 10 == 0)
	{
		printf("\ni'm done ");
	}
	else
	{
		printf("\ni'm not done");
	}
	
	//short form of if else 
	
	int time = 10;
	(time = 10) ? printf("\nGood Morning") : printf("\nGood Day");
    

	//Switch 
	int day = 4;

	switch (day) 
	{
	case 6:
		printf("\nToday is Saturday");
		break;
	case 7:
		printf("\nToday is Sunday");
		break;
	default:
		printf("\nLooking forward to the Weekend");
	}

	//While loop
	int i = 0;
	while (i < 5)
	{
		printf("\n %d", i);
		i++;
	}
	
	 i = 0;
	 printf("\n new break while");

	 while (i < 10)
	 {
		 if (i == 4)
			 break;
		 printf("\n %d", i);
		 i++;
	 }
	 
	 i = 0;
	 printf("\n new continue while");

	 while (i < 10)
	 {
		 if (i == 4) 
		 {
			 i++;
			 continue;
		 }
		 printf("%d\n", i);
		 i++;
	 }


	Gap();
	//do while
	i = 0;
	do
	{
		printf("\n %d", i);
		i++;
	} 
	while (i < 5);
	Gap2(2);
	//For loop
	int f;
	for (f = 0;f <= 10;f += 2)
	{
		printf("\n %d", f);
	}


	//Array
	Gap();
	int myArray[] = { 10,20,30,40 };
	printf("\n %d", myArray[0]);
	myArray[0] = 15;
	Gap();
	for (i = 0;i < 4;i++)
	{
		printf("\n %d", myArray[i]);
	}

	//string
	Gap();
	char greetings[] = "Hello World!";
	printf("\n%s", greetings);
	greetings[0] = 'J';
	printf("\n%s", greetings);
	// Outputs Jello World! instead of Hello World!


	char greetingschar[] = "Hello World!";
	printf("\n%c", greetingschar[0]);

	Gap();
	char greetings1[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0' };
	char greetings2[] = "Hello World!";

	printf("%lu\n", sizeof(greetings1));   // Outputs 13
	printf("%lu\n", sizeof(greetings2));  // Outputs 13


	//Sizeoff
	char myName[] = "Fatima";
	printf("\n size off %lu \n", sizeof(myName));


										  
										  
										  
    //Memory Address

	// three ways to declare pointer variables

	// 1 int* myNum; // Most used
	// 2 int  *myNum;
	// 3 int  * myNum;


	Gap();
	printf("\n hi this is POINTER\n");
	int myAge = 20;
	printf("1%p\n", &myAge);
   
	int* ptr = &myAge;
	int** ptr2 = &ptr;
	

	printf("2%p\n", ptr2);

	// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("3%p\n", ptr);

	// Dereference: Output the value of myAge with the pointer (20)
	printf("%d\n", *ptr);



	//Functions
	Function("\nLiam", 3);
	printf("\nResult is: %d", myFunction(5, 3));
	
	int result = myFunction(5, 3);
	printf("\nResult is = %d", result);

	//Structures
	struct FMstruct FM1;

	FM1.Num = 1;
	FM1.Letter = 'F';
	strcpy(FM1.string, "FatiMuz");

	printf("\nNumber is %d ", FM1.Num);
    printf("\nchar is %c ", FM1.Letter);
	printf("\nstring is %s ", FM1.string);

	//RECURSION
    
	int result2 = Recursion(10);
	printf("\n%d", result2);
	
	




    


	////////////////
	printf("\n");
	system("pause");
	return 0;

	

}





// Functions Defination
void Gap()
{
	printf("\n\n");

	return 0;
	
}



void Gap2( int num)
{
	for ( int f = 0;f <= num;f += 1)
		printf("\n");
	 
	return 0;

}

void Function(char name[], int age)
{
	printf("Hello %s. You are %d years old.\n", name, age);

	return 0;
}



int  myFunction(int x, int y)
{
	printf("\n hi return");
	return x + y;
}

int Recursion(int k) 
{
	if (k > 0) 
	{
		return k + Recursion(k - 1);
	}
	else 
		return 0;
}








// ShortCuts of Visual Studio

/*
Can comment multiple lines
like brackets for comment

 Select the text first and then implement the commands
 Ctrl + K, Ctrl + F   >  Indentation
 Ctrl + K, Ctrl + I   >  Indentation
 Ctrl + K, Ctrl + c   >  comment
 Ctrl + K, Ctrl + u   >  Uncomment

*/



// F5           > run the program
// Shift + F5   > stop the program

// F10    > Run Line
// F11    > Step InTo
// Shift + F11


/*
https://www.w3schools.com/c/c_data_types.php

%c  > character
%s  > string (character list)
%f  > float  >> %.1f  >> %.2f  >> %.3f
%lf > double  >> %lf >> %.15lf
%d or %i  > int ( integer)
%p  > Address                       EX: a=10   &a for address
*/
