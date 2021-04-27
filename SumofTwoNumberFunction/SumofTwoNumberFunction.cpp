#include<iostream>
#include<conio.h>
void sum(void);
using namespace std;
int main()
{
    sum();
    getch();
}
void sum(void)
{
    int a,b,c;
    cout<<"Enter First Number = ";
    cin>>a;
    cout<<"Enter Second Number = ";
    cin>>b;
    c=a+b;
    cout<<"Sum = "<<c;
}