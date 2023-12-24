#include<iostream> 
#include<fstream>

using namespace std;

int main()
{
    string str;

    ifstream file("file1.txt");

    if(file.is_open())
    {
        while(getline(file,str))
        {
            cout<<str<<endl;
        }
        file.close();
    }
    retuen 0;
}