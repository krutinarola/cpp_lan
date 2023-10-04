/* Declare two variables x and y. Assign values to these variables. Number x should be printed only if it is less than 2000 or greater than 3000, and number y should be printed only if it is between 100 and 500. */


#include<stdio.h>

int main()
{

int x,y;

       printf ("Enter Value of X :");
       scanf("%d",&x);

        printf ("Enter value of y :");
        scanf("%d",&y);

         if (x < 2000 || x > 3000)

	{
		printf("this value is : %d\n",x);
	}
	if (y > 100 && y < 500)
	{
		printf("this value is : %d\n",y);
	}

	return 0;
}

/*

Enter Value of X :1999
Enter value of y :200
this value is : 1999
this value is : 200


Enter Value of X :5000
Enter value of y :50
this value is : 5000


*/
      
