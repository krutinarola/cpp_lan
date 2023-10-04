/* Enter one value find its divisible by 5 and 3 or not*/

#include<iostream>
using namespace std;

int main()
{
    int a;
    
	cout << "Enter Any Nomber :";
	cin >> a;

	if(a%15==0)
	{
		cout << "its divisible by 5 and 3";
	}
	else
	{
		cout << "its not divisible by 5 and 3";
	}

	return 0;
}

/*
	Enter Any Nomber :45
	its divisible by 5 and 3

	Enter Any Nomber :13
	its not divisible by 5 and 3
*/