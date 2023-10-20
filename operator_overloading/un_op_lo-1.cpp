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
    box operator++(int)
    {
        box t;
        t.l=l++;
        t.w=w++;
        t.h=h++;
        return t;
    }

};
int main()
{
    box b1;
    b1.setdata(2,2,2);
    cout<<"volume of box B1 is :"<<b1.getvolume()<<endl;


    b1++;
    cout<<"volume of box B1 is :"<<b1.getvolume()<<endl;
}