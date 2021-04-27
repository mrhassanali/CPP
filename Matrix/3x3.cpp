#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r,c,x[3][3],y[3][3],sum[3][3];
    cout<<"Enter First Matrix Number"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>x[r][c];
        }
    }
    cout<<"Enter Second Matrix"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>y[r][c];
        }
    }
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            sum[r][c]=x[r][c]+y[r][c];
        }
    }
     cout<<"Sum of Matrix"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cout<<sum[r][c]<<"\t";
        }
        cout<<endl;
    }
    getch();
}