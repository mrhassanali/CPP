#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,x[10];
    cout<<"Enter 10 Number=";
    for(i=0;i<=9;i++)
    {
        cin>>x[i];
    }
    cout<<"Reverse Number=";
    for(i=9;i>=0;i--)
    {
        cout<<x[i]<<endl;
    }
    getch();
}