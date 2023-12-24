#include<iostream> 
#include<fstream>

using namespace std;

int main()
{
    string str="skillqode";

    ofstream file("file2.txt",ios::app);

    if(file.is_open())
    {
       file<<"skillqode"<<endl;
       file<<"kruti";
        file.close();
    }
    return 0;
}