/* using friend function operatore overloding */

#include<iostream>
using namespace std;

class box
{
     int l,w,h;

     public:
     void setdata(int a,int b,int c)
     {
        l=a;
        w=b;
        h=c;
     }
     int getvolume()
     {
        return l*w*h;
     }
     friend box operator+(box m, box n)
     {
        box t;
        t.l=m.l+n.l;
        t.w=m.w+n.w;
        t.h=m.h+n.h;
        return t;
     }
     friend box operator++(box m)
     {
        box t;
        t.l=++m.l;
        t.w=++m.w;
        t.h=++m.h;
        return t;o
     }

};

int main()
{
    box b1,b2,b3,b4;
    b1.setdata(2,2,2);
    cout << "volume of box b1 is :  " << b1.getvolume()<< endl;
    b2.setdata(3,3,3);
    cout << "volume of box b2 is :   " << b2.getvolume()<< endl;

    b3=b1+b2;
    cout << "volume of box b3 is :   "  << b3.getvolume()<< endl;

    // unary friend function opertor overloding

    b4= ++b3;
    cout << "after incerrnt volume of box b4 is :  "<< b4.getvolume()<< endl;



}
