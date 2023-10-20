
#include<iostream>
using namespace std;
class person
{
    public:

        int a,b;
    person()
    {
        int a=10,b=20;
        cout << a+b << endl;
        cout<<a*b << endl ;
    }
    person(int a,int b)
    {

    }
    ~person()
    {
        cout << "hallo world ! "<< endl;
    }
 
};
int main()
{
    person p1;


}

