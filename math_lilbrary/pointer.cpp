//this pointer 
//this ->


#include<iostream>
using namespace std;

class cookie
{
    public:
    int sugar;
    cookie(int sugar)
    {
        this -> sugar = sugar;
    }

    void describe()
    {
        cout << "sugar in cookie: "<<sugar<<endl;
    }
};

int main()
{
    cookie chocochips(15);
    cookie oatcookie(5);

    chocochips.describe();
    oatcookie.describe();
}
