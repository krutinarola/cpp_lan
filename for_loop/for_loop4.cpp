/*  enter n print n to 1 */

#include<iostream>
using namespace std;
int main()
{
  int a,n;

    cout << " Enter any value : ";
    cin >> n;

 	for(a=n;  a>=1; a--)
	{
		cout << " N is :  " << a << endl;
	}

	return 0;
}

/*

 N is : 5
 N is : 4
 N is : 3
 N is : 2
 N is : 1

*/