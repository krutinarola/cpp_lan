#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    //int rn=rand();
    int rn;
    int max=120;
    int min=50;

    rn=min + rand() % (max-min+1);
    cout<<rn;
    return 0;
}