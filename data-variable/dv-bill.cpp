
#include<iostream>
using namespace std;
int main()
{
    int rate=50, qty=200, amt=10000, dis=500, billamt=9500;
    float gst, netbill;
    gst=billamt*0.18;
    netbill=billamt+gst;

    cout <<"\trate \tqty \tamt \tdis \tbillamt \tgst \tnetbill \n";
    cout <<" \t"<<rate << "\t" << qty <<" \t"<< amt <<" \t"<< dis <<" \t"<< billamt<<" \t\t" << gst <<" \t"<< netbill<<" \t";

    return 0;


}