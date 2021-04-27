#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,sum=0,array[10];
    cout<<"Enter 10 Number T0 Added Array=";
    for(i=0;i<=9;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+array[i];
    }
    cout<<"Sum="<<sum;
    getch();
}