#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,t,x,l;
    cout<<"Enter the Value to Generate the Table=";
    cin>>n;
    cout<<"Enter the length of the Table=";
    cin>>l;

    for(x=1; x<=l; x=x+1)
    {
        t=n*x;
        cout<<n<<"*"<<x<<"="<<t<<endl;
    }
}