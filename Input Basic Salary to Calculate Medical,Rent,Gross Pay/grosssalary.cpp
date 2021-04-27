#include<iostream>
#include<conio.h>
//Function Defination/Prototype
float house(int b);
float medical(int b);
float gross(int b,float h,float m);
using namespace std;
int main()
{
    int b; //b=basic salary
    float h,m,g;
    cout<<"Enter the Basic Salary=";
    cin>>b;
    cout<<"Basic Salary="<<b<<endl;
    h=house(b);
    cout<<"House Rent="<<h<<endl;
    m=medical(b);
    cout<<"Madical allowance="<<m<<endl;
    g=gross(b,h,m);
    cout<<"Gross Pay="<<g;
    getch();
}
float house(int b)
{
    int rent;
    rent=(b*10)/100;
    return (rent);
}
float medical(int b)
{
    int ma;
    ma=(b*15)/100;
    return(ma);
}
float gross(int b,float m,float h)
{
    int gros;
    gros=b+m+h;
    return(gros);
}
