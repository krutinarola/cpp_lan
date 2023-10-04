/* Enter a,b,c find largest among them*/

#include<iostream>
using namespace std;
int main()
{

	int a,b,c;
	cout <<"Enter a value :";
	cin >> a;
	cout << "Enter b value :";
	cin >> b;
	cout << "Enter c value :";
	cin >> c; 

        if(a>b)
	{
		if(a>c)
		{
	         	printf(" %d is big",a);
	  	}
		else
		{	
		        printf(" %d is big",c);	
		}
	}
        else
	{
      		if(b>c)
		{
			printf(" %d is big",b);
		}
		else
		{		
			printf(" %d is big",c);
		}
	}


	return 0;	
}

/*

Enter a value :10
Enter b value :20
Enter c value :30
 30 is big

 
 Enter a value :30
Enter b value :50
Enter c value :10
 50 is big

*/