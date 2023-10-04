#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout << "Enter i value :";
    cin >> n;

    for(i=2 ;i<=n;i+=2)
    {
        cout << "i is " << i <<endl;
    }
    return 0;

}