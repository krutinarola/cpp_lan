#include<iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter a value :";
    cin >> a;

    if(a%100==0)
    {
        cout << " a is century year";
    }
    else
    {
        cout << "a is not century year";
    }
    return 0;
