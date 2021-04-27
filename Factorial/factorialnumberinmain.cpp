#include<iostream>
#include<conio.h>
//function declaration or prototype
int factorial(int x);
//use for standard library function
using namespace std;
int main()
{
    int x,fact;
    cout<<"Enter the Number to find Factorial=";
    cin>>x;
    fact=factorial(x); //call by values
    cout<<"Factorial="<<fact;
    getch();
}
int factorial(int x)
{
    int f;                   // like use For Loop
    f=1;                    // int n,f=1;  
    while(x>=1)            //  for(n=x;n>=1;n--)
    {                     //   {
        f=f*x;           //       f=f*n;
        x--;            //      } 
    }                  //       return f;
    return f;
}