/* C program to chek whether a person is eligible for voting or not */

#include<iostream>
using namespace std;
int main()
{
   int age;

   cout << "Enter your Age :";
   cin >> age;

   	if(age>18)
	{
		cout << "eligible for voting";
	}
	else
	{
		cout << " not eligible for voting";	
	}

	return 0;
}

/*

Enter your Age :20
eligible for voting

Enter your Age :17
 not eligible for voting

*/