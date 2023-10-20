/*Largest no. of among them using friend function*/


#include<iostream>
using namespace std;

class larg
{
private:
   int x, y;
public:

   void setdata()
    {
       cout << "Enter x value:";
       cin >> x;
       cout << "Enter y value:";
       cin >> y;
    }

   friend void find(larg t);
};

void find(larg t)
{
   if (t.x > t.y) 
   {
       cout << "Largest is:" << t.x;
   }
   else
   {
       cout << "Largest is:" << t.y;
   }
}

int main()
{

   larg t;
   t.setdata();
   find(t);

    return 0;
}
