#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int jy,cy,Service;
    cout<<"Enter the Joining Year=";
    cin>>jy;
    cout<<"Enter the Current Year=";
    cin>>cy;
    Service=cy-jy;
    if(Service>3)
    {
        cout<<"Eligible";
    }
    else if(Service>2)
    {
        cout<<"You are Waiting List For 1 Year";
    }
    else if(Service>1)
    {
        cout<<"You are waiting List For 2 Year";
    }
    else    
    {
         cout<<"Only those Person are Eligible whoes Age is equal to or Greater the 18";
    }
    getch();
}