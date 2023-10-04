/* An electricity board charges the following rates to domestic users to discourage large consumption of energy 
For the first 100 units 60P per unit For the next 200 units 80P per unit Beyond 300 units 90P per unit All users
 are charged a minimum of Rs. 50. If the total amount is more than 300.00 then an additional surcharge of 15% is
  added. */


#include<iostream>
using namespace std;
int main()
{
    int unit,billamt,total;

    cout << "Enter unit --->";
    cin >> unit;

    if(unit <= 100)
    {
        billamt = unit * 0.6 + 50;
    }
    else if(unit > 100 && unit <= 300)
    {
        billamt = 60 + (unit-100) * 0.8 + 50;
    }
    else if(unit >= 300)
    {
        billamt = 220 + (unit-300) * 0.9 + 50;
    }
    if(billamt >= 300)
    {
        billamt = billamt + (billamt*0.15);
    }
    cout << "the charge is :" << billamt;
    return 0;
}

/*
	Enter unit :600
        total is : 620

	Enter unit :100
        total is : 109

*/