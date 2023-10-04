
#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout << "Enter i value :";
    cin >>n;

    for(i=65 ;i<=90;i++)
    {
        cout << (char)i << (char)i+32 << " "<< endl;
    }
    return 0;

}