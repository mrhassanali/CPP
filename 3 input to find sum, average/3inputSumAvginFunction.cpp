#include<iostream>
#include<conio.h>
void average(int x,float y,int z);
using namespace std;
int main()
{
    int a,c;
    float b;
    cout<<"Enter First value="<<endl;
    cin>>a;
    cout<<"Enter Second Value="<<endl;
    cin>>b;
    cout<<"Enter Third Value="<<endl;
    cin>>c;
    average(a,b,c);
    getch();
}
void average(int x,float y,int z)
{
    float sum,avg;
    sum=x+y+z;
    avg=sum/3;
    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<avg;
}