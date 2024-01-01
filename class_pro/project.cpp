#include<iostream>
using namespace std;
class shop
{
    
        public:

        int number ;
        int na,no;
        double price,gst;
        }
        shop(int name, int number)
        {
           /* cout<<"      cakeshop    "<<endl;
            cout<<"___________________________"<<endl;
            cout<<"name     price"<<endl;
            cout <<"chocolate   80 "<<endl;
            cout<<"cake    300"<<endl;
            cout<<"shak   200"<<endl;
            cout <<"coco    100"<<endl; 
            */ cout<<"\t\tRestuarnt\n";
        cout<<"---------------------------------------\n";
        cout<<"item_no\t\titem_name\titem_price\n";
        cout<<"--------------------------------------\n";
        cout<<"1\t\tpizza\t\t150rs\n";
        cout<<"2\t\tdhosa\t\t130rs\n";
        cout<<"3\t\tmaggie\t\t50rs\n";
        cout<<"Enter coustomer name= ";
        cin>>na;
        cout<<"Enter phone_no= ";
        cin>>no;

        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter order= ";
            cin>>number;  

        }
        }
    
};
int main()
{
    shop sp;
}

/*int main()
{
    shop arr[] = 
    {
        
        {1,"chocolate ",80},{2,"cake ",300},{3,"kikkat shak",200},{4,"coco",100}

        

    };
    cout<<"      cakeshop    "<<endl;
    cout<<"___________________________"<<endl;
    cout<<"name    price"<<endl;

    for (int i = 0; i < count; i++)
    {
    

*/
