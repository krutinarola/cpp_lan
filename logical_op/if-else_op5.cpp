/*
   Write a program to evaluate the Total, Percentage, Grade of a student for the

following constraints:

a. If marks> 75-grade A

b. If 60 marks < 75-grade B

c. If 45 < marks<60-grade C

d. If 35 marks<45-grade D

e. If marks <35-Fail
*/
#include<iostream>
using namespace std;
int main()
{
    int sci,ss,eng,per,total;
    
    cout << "Enter sci value :";
    cin >> sci;
    cout << "Enter ss value :";
    cin >> ss;
    cout <<"Enter eng value :";
    cin >> eng;

   cout << "total is : " << total;
   cout << "per is : "<< per;
   total=sci+ss+eng;
    per=(total)/3;

    if(per>75)
    {
        cout << "students is grade A";
    }
    else if(per<60&&per<75)
    {
        cout << "students is grade B"; 
    }
    else if(per<45&&per<60)
    {
        cout << "students is grade C";
    }
    else if(per<35&&per<45)
    {
        cout <<"students is grade D";
    }
    else if(per<=35)
    {
        cout << "students is fail";
    }
    return 0;
}