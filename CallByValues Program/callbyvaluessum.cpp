#include<iostream>
#include<conio.h>
float average(int a,float b,int c);
using namespace std;
int main()
{
    int a,c;
    float b,avg;
    cout<<"Enter the value of a="<<endl;
    cin>>a;
    cout<<"Enter the value of b="<<endl;
    cin>>b;
    cout<<"Enter the value of c="<<endl;
    cin>>c;
    avg=average(a,b,c);
    cout<<"Average="<<avg;
}
float average(int a,float b,int c)
{
    float sum,average;
    sum=a+b+c;
    average=sum/2;
    return(average);
}