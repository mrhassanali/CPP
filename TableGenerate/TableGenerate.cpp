#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("color 5f");
    int n,t,x,l;
    cout<<"Enter the Number to Generate Table=";
    cin>>n;
    cout<<"Enter Number Length of Generate Table=";
    cin>>l;
    x=1;
    while (x<=l)
    {
        /* code */
        t=n*x;
        cout<<n<<"*"<<x<<"="<<t<<endl;
        x++;
    }
    getch();
}