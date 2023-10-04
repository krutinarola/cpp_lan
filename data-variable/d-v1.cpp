/*
    write program three subject total marks & percentage.
    total is:248
    per is :82
*/
#include <iostream>
using namespace std;

int main()
{
    int sci=88,eng=70,phy=90,total,per;
    total=sci+eng+phy;
    cout << "total --> "<< total <<endl;
    per=total/3;
    
    cout << "per --> "<< per ;
    return 0;

}
