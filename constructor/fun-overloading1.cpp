/* write a program construct a class name solid.
   take private members length,height,width in public make a 
   funcation numed area ,which calculates shape of different solid shapes.*/ 

#include <iostream>
using namespace std;

class solid
{
    public:
    solid()
    {
        cout <<"defult constructor is called "<<endl;
    }
    void solid1(int a)
    {
        cout << "cube is:"<< a*a*a <<endl; //The volume of a cube = a × a × a = a3 cubic units.
    }
    void solid2(double r)
    {
        cout << "spher is:"<<4/3*3.14*r*r<<endl;//the volume of the sphere is (4/3)πr3.
    }
    void solid3(int l ,int b, int h)
    {
        cout <<"cuboid is:"<<l*b*h<<endl;//the volume of a cuboid, V = l × b × h = lbh units3.
    }

};

int main()
{
    solid s1;
    s1.solid1(5);
    s1.solid2(2.2);
    s1.solid3(2,3,4);
};

   

















































































































































































































