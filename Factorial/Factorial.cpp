#include<iostream>
#include<conio.h>
int factorial(int x);
using namespace std;
int main()
{
    system("color 2F");
    int x,recive;
    cout<<"Enter the Number to find Factorial=";
    cin>>x;
    recive=factorial(x);
    cout<<"Factorial="<<recive;
    getch();
}
int factorial(int x)
{
    int f;
f=1;
while(x>=1)
{
    f=f*x;
    x--;
}
return f;
}