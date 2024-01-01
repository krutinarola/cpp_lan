/*#include<iostream>
using namespace std;
class bankaccount
{
  private:
   int amt,dep,wit,total,withd,balance;

   public:
   int a=amt,d=dep,w=wit,t=total,wd=withd,b=balance;
    bankaccount()
     {
   cout<<"Enter your amount= ";
 cin>>a;
  cout<<"Enter your deposit amount= ";
   cin>>d;
} 
 void deposit()
 {
 t=d+a;
 cout<<"Total amount in your account= "<<t<<endl;
 } void withdraw()
 {
   cout<<"Enter your withdraw_amount= ";
   cin>>wd;
   if (a<wd)
    {
      cout<<"you have not sufficient amount";
    }
  else if (a>=w)
    {
      b=t-wd;
     cout<<"Present amount in your account= "<<b<<endl;
     }
 }
};
int main()
{
   bankaccount b1;
    b1.deposit();
    b1.withdraw(); 
  return 0;
}
*/

#include<iostream>
using namespace std;

class store
{
    public:
        string name,item [10];
        int Mobilenumber,order,Quantity[10],price[10],total[10],c=0,total_amount=0;
    
    store()
    {
        cout<<"\t\tRestuarnt\n";
        cout<<"---------------------------------------\n";
        cout<<"item_no\t\titem_name\titem_price\n";
        cout<<"--------------------------------------\n";
        cout<<"1\t\tpizza\t\t150rs\n";
        cout<<"2\t\tdhosa\t\t130rs\n";
        cout<<"3\t\tmaggie\t\t50rs\n";
        cout<<"--------------------------------------\n";
        cout<<"Enter coustomer name= ";
        cin>>name;
        cout<<"Enter phone_no= ";
        cin>> Mobilenumber;

        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter order= ";
            cin>>order;
            
            if(order==1)
            {
              
                cout<<"item_name = pizza\n";
                item[i]="pizza";                                                                  
                cout<<"item_price = 150\n";
                price[i]=150;
                cout<<"Enter Quantity= ";
                cin>>Quantity[i];
                cout<<"Total amount= "<<endl;
                total[i]=(price[i]*Quantity[i]);
                cout<<total[i]<<endl;
                total_amount=total_amount+total[i];
                cout<<"--------------------------------------\n";
            }
            else if(order==2)
            {
             
            cout<<"item_name = dhosa\n";
            item[i]="dhosa";
            cout<<"item_price = 130\n";
            price[i]=130;
            cout<<"Enter Quantity= ";
            cin>>Quantity[i];
            cout<<"Total amount= "<<endl;
            total[i]=(price[i]*Quantity[i]);
            cout<<total[i]<<endl;
            cout<<"--------------------------------------\n";
            }
            else if(order==3)
            {
            cout<<"item_name = maggie\n";
            item[i]="maggie";
            cout<<"item_price = 50\n";
            price[i]= 50;
            cout<<"Enter Quantity= ";
            cin>>Quantity[i];
            cout<<"Total amount= "<<endl;
            total[i]=(price[i]*Quantity[i]);
            cout<<total[i]<<endl;
            total_amount=total_amount+total[i];
            cout<<"--------------------------------------\n";
            }  
             else
            {
                c = i;
                break;
            }
    }
    } 
     void print()
     {  
      cout<<"                                                                   \n";
         cout<<"                --> FOODSHOP  BILL <--                      \n";
         cout<<"                                                                             \n";
         
         cout<<"Item_name      \t\tprice\t Quantity\ttotal_amount \n";
         cout<<"                                                                             \n";
         for(int i= 0; i<c;  i++)
         {
            
            cout<<item[i]<<"\t\t"<<                price[i]<<"\t\t"<<Quantity[i]<<"\t\t"<<total[i]<<endl; 
         } 
            cout<<"grand total:" << total_amount<<endl;
            cout<<"                                                                                 \n";
            cout<<"                                 THANK FOR YOUR VISIT                                   \n";
            cout<<"                               HAVE A NICE DAY                                                     \n";
     }
};
int main()
 {
     store st;
     
     st.print();
 }