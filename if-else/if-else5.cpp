/* Enter student marks wheather pass or not */

#include<iostream>
using namespace std;
int main ()

{
  int eng,guj,eco,Total,per;

       cout << "Enter your eng marks :";
       cin >> eng;
       cout << "Enter your guj marks :";
       cin >> guj;
       cout << "Enter your eco marks :";
       cin >> eco;
       Total=eng+guj+eco;
       cout << "Total marks is :\n" << Total;
       per=(Total)/3;
       cout << "persentage is :\n" << per;

 	if(per > 33)
	{
		cout << "student is pass";
	}
	else
	{
		cout << "student is fail";
	}

	return 0;
}

/*

	Enter your eng marks :30
	Enter your guj marks :20
	Enter your eco marks :26
	Total marks is :76
	persentage is :25
	student is fail

        Enter your eng marks :90
	Enter your guj marks :95
	Enter your eco marks :93
	Total marks is :278
	persentage is :92
	student is pass
	
*/
