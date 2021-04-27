#include<iostream>
#include<conio.h>
int factorial(int m);
using namespace std;
int main()
{
    int x,r;
    cout<<"Enter the Number to find Factorial=";
    cin>>x;
    r=factorial(x);
    cout<<"Factorial="<<r;
    getch();
}
int factorial(int m)
{
    int f,n;
    f=1;
    for(n=m;n>=1;n--)
    {
        f=f*n;
    }
    return f;
}