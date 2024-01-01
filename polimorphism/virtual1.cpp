
// --------------------------------------------------------------------------- 
//--------------------------- virtual function -------------------------------
//----------------------------------------------------------------------------

// method 1
#include<iostream>
using namespace std;

class pet
{
     public:
      void print()
     {
     cout << "print voices of animal  ";
     }
};

class dog : public pet
{
    public:
     virtual void print()   
      {
     cout << "dog barks ";
    }
};

class cat : public dog
{
     public:
      virtual void print()
     {
         cout << "cat meow ";
          }
};

int main()
{
 pet mypet;

 dog mydog;

 cat mycat;
} 