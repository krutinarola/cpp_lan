#include<iostream>
using namespace std;
class triangle
{
    private:
        int base,height;
    
    public:
     triangle()
    {
        int b=20,h=60;

        cout << h*b/2 << endl;
        cout << 3*b;
    }
};
int main()
{
    triangle t1;
}