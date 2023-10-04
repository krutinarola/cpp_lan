#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout << "Enter value of a :" << a <<"\n";
    cout << "Enter value of b :" << b <<"\n";

    a=a+b;//a=10+20=30;
    b=a-b;//b=10-20=10;
    a=a-b;//a=10-20=10;

    cout << "After swapping value a :" << a <<"\n";
    cout << "After swapping value b :" << b <<"\n";
    return 0;
}