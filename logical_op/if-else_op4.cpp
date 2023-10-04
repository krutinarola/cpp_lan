/*
Compute taxes for a given income with tax slab rates as follows...

a. slab 1... 0-2500: 0%

b. slab 2. 2500-5000; 10%

c. slab 3. 5000-10000: 20%

d. slab 4 10000+ 30%

(for each range of a given income, the tax rate is different) a.g. input x 5200 divisions are 
0-2500 , 2500-5000 ,  5000-5200  calculation 0-2500 of x: 01% of 2500 = 0 ,
    2500-5000 of x 10% of 2500 250 5000-1000 of x 20% of 200 40 output 290 
    
*/
#include<iostream>
using namespace std;
int main()
{
    int income,taxamount;

    cout << "Enter basic income :";
    cin >> income;

    if (income>=0&&income<=2500)
    {
       taxamount=0;
    }
    else if(income>=2500&&income<=5000)
    {
       taxamount=(income-2500)*0.10;
    }
    else if(income>=5000&&income<=10000)
    {
        taxamount=250+(income-5000)*0.20;
    }
    else if(income>=10000)
    {
        taxamount=1250+(income-10000)*0.30;
    }
    cout << "the taxamount is :" << taxamount;

    return 0;
}

/*
Enter basic income :5400
the taxamount is :330
*/