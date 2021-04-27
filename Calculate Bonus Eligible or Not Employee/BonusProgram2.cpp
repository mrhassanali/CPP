#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int jy,cy,service;       //jy=joining year,cy=current year
    cout<<"Enter the joining Year=";
    cin>>jy;
    cout<<"Enter the Current Year=";
    cin>>cy;
    service=cy-jy;
    if(service>3)
    {
        cout<<"Bonus=500";
    }
    else
    {
        cout<<"Your are Not Elegible for this Bonus";
    }
    getch();
}