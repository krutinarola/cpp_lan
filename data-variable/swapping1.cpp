#include<iostream>
using namespace std;

int main()
{
    int a=20;
    int b=40;

    cout <<"Before swapping value a : " << a << "\n";
    cout << "Before swapping value b :" << b <<"\n";

    a=b;//a=20;
    b=a;//b=20;


    cout <<"After value of a :" << a <<"\n";
    cout <<"After value of b :" << b <<"\n";

    return 0;

}