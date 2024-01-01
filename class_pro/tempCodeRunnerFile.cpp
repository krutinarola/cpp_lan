#include<iostream>
#include<string.h>
using namespace std;

class customer
{
     protected:
    string name, contact_number;
    public:
     void getdata()
     {
          cout<<"~~~ WELCOM TO FOODSHOP ~~~ \n";
          cout<<"CUSTOMER NAME : ";
          cin>>name;
          cout<<"CUSTOMER CONTACT NUMBER : ";
          cin>>contact_number;
     }

     void showdata()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact_number<<endl;
     }

};
class Show_bill : public customer 
{

    protected :   

      int  GST  ,  discount , Net_bill,bill_amt =0 ;
      int   Bill =0 , quantity;

      string Ditems[5];

     public :
         int item1()
      {
         cout<<"\n \tEnter Qunatity :";
         cin>>quantity;
         Ditems[0] = "FRENCHFIRE   = 40 ";
         return Bill = Bill + quantity*125;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[1] = "GALIC BRAD= 150 ";
         return Bill = Bill + quantity*150;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[2] = "DHODHA = 440";
         return Bill = Bill + quantity*40;
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quantity;
         Ditems[3] = "PIZZA= 225";
         return Bill = Bill + quantity*25;
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[4] = "SODA  = 15";
         return Bill = Bill + quantity*15;
      }


      int Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      int Show_disc()
      {
         if (bill_amt >  250 )
        {
            return discount = ( bill_amt *10  ) / 100; 
        }

        else 
        {
            return discount = 0;
        }
      }

      int  Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      int Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - discount  ;
      }
      void Show_Net_Bill()
      {
            Show_bill_Items();
            cout<<"\n\t TOTAL ORDER PRICE  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t DISCOUNT           : "<<Show_disc() <<endl;
            cout<<"\n\t TOTAL PAY BIL      : "<<Show_Net_bill()<<endl;
            cout<<"\n\n\t  THANK FOR YOUR VISIT\n\t     HAVE A NICE DAY"<<endl; 
      }
     void Show_bill_Items()
      {

         int i ;

         for(i=0;i<5;i++)
         {
         if(!Ditems[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<endl;
         }
         }
      }

};
int main ()
{

     Show_bill a ;
     

        a.getdata();

        cout<<"\n\t\t\t\t\t ** Menu ** \n";
        cout<<" \n \t\t\t [1] FRENCHFIRE                : RS. 40 /- "; 
        cout<<" \n \t\t\t [2] GRALIC BREAD              : RS. 150 /- "; 
        cout<<" \n \t\t\t [3] DHOSA                     : RS. 440 /- "; 
        cout<<" \n \t\t\t [4] PIZZA                     : RS. 225 /- ";
        cout<<" \n \t\t\t [5]SODA                       : RS. 15 /- \n";
        cout<<" \n \t\t\t     ORDER COMPLATE       [0]  \n";

        int choice ;

        do
        {
         cout<<"\n Enter your choice : ";
         cin>>choice ;
        switch (choice)
        {
        case 1: 
             a.item1();
             break;
        case 2: 
             a.item2();
             break;
        case 3: 
             a.item3(); 
             break;
        case 4: 
             a.item4();
             break;
        case 5: 
            a.item5();
             break;

        case 0: 
           break;
        }

      } while (choice!=0);
            a.showdata();
            a.Show_Net_Bill();
}
