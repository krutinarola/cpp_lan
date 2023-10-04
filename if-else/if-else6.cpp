/* Enter year find its leap year or note */

#include<iostream>
using namespace std;
int main()
{
   int a;
   
   cout <<"Enter Any year : ";
   cin >> a;

   if(a%4==0)
   {
  	    cout <<" leap year";
   }
   else
   {
    	cout << "not leap year";
   }

	return 0;

}

/*

	Enter Any year : 2024
 	leap year

	Enter Any year : 2022
	not leap year
*/