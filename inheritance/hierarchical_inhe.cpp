#include<iostream>
using namespace std;
class base 
{
    protected:
    int a;
    public:
    void setA()
    {
        cout <<"Enter a:";
        cin>>a;
    }
};
class Derived1 : public base
{
    int b;
    public:
    void setB()
    {
        cout<<"ENTER B :";
        cin>>b;
    }
    void Addition()
    {
        cout<<" Addition of a and b "<<a+b<<endl;
    }
};
class Derived2 : public base
{
    int c;
    public:
    void setc()
    {
        cout<<"ENTER C";
        cin>>c;
    }
    void product()
    {
        cout<<"product of a and b is :"<<a*c<<endl;
    }
};
int main()
{
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.Addition();

    Derived2 d2;
    d2.setA();
    d2.setc();
    d2.product();
}
