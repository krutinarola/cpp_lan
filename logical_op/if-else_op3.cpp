/*
Write a C program to accept the basic salary of an employee from the user. Calculate the gross salary on the following basis:

Basic			 HRA		DA

Up to 5000		8%		20%

			               
5000 to 10000		12%		30%


10000 to 15000		15%		40%


15000 above		20%		50%

   
*/
#include<iostream>
using namespace std;
int main()
{
    int basic,salary;
    cout << "Enter basic is :";
    cin >> basic;

    if (basic<=5000)
    {
        salary=basic+(basic*0.28);
    }
    else if(basic >5000 && basic>10000)
    {
        salary=basic+(basic*0.42);
    }
    else if(basic>10000&&basic>15000)
    {
        salary=basic+(basic*0.55);
    }
    else if(basic>=15000)
    {
        salary=basic+(basic*0.70);
    }
    cout << "the gross salary :" << salary;

    return 0;
}

/*
Enter basic is :12000
the gross salary :17039

Enter basic is :20000
the gross salary :28399

*/