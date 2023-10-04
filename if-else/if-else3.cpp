
/*  Enter one value find its divisible by 5 or  not */

#include<iostream>
using namespace std;
int main()
{
	int a;

	cout << "enter A -->" ;
	cin >> a;
       

	if(a%5==0)
	{
		cout << "its dision by 5";
	}
	else
	{
		cout << "its not divison by 5";
	}
	

	return 0;
}

/*

enter A:70
its dision by 5

enter A:13
its not divison by 5

*/