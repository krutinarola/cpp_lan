#include<iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter a value :";
    cin >> a;

    if(a%35==0)
    {
        cout << " a is divisible";
    }
    else
    {
        cout << "a is not divisible";
    }
    return 0;
}