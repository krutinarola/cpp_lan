#include<iostream>
using namespace std;

class Base1{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"ENTER A:";
        cin>>a;

    }
};
class Base2:public Base1
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"ENTER B:";
        cin>>b;
    }
};
class Derived : public Base2
{
    public:
    void product()
    {
        cout<<"product of a and b: "<< a*b<<endl;

    }
};
int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.product();
}
