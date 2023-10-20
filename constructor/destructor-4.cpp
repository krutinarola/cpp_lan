#include<iostream>
using namespace std;
class person
{
    private:

     int sci ,eng,phy,total,per;

     public:

        person()
        {
            int eng,sci,phy,per,total;

            cout <<"Eng marks -->";
            cin >> eng;
            cout <<"Sci marks-->";
            cin >>sci;
            cout <<"phy mark -->";
            cin >>phy;

            total=eng+sci+phy;
            per=total/3;

            cout<< " Total is :" <<total<<endl;
            cout << " percentage is :" <<per<<endl;

        }
        ~person()
        {
            if(per>=33)
            {
                cout << "students is pass.";
            }
            else{
                cout << "students is fail.";
            }
        }


};
int main()
{
    person p1;

    return 0;

}