/* Operator overloading additon */


#include<iostream>
using namespace std;

class box
{
    int l,w,h;
    public:
    setdata (int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getvolume()
    {
        return l*w*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l=l+n.l;
        t.w=w+n.w;
        t.h=h+n.h;
        return t;
    }


};
int main()
{
    box b1,b2,b3;
    b1.setdata(2,2,2);
    cout<<"volume of box b1 is: "<< b1.getvolume()<<endl;
    b2.setdata(3,3,3);
    cout<<"volume of box b2 is: "<< b2.getvolume()<<endl;

    b3=b1+b2;
    cout<<"volume of box b3 is: "<< b3.getvolume()<<endl;
}


    

