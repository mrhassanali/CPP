#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r,c,x[3][4],y[3][4],sum[3][4];
    cout<<"Enter First Matrix"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=3;c++)
        {
            cin>>x[r][c];
        }
    }
    cout<<"Enter Second Matrix"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=3;c++)
        {
            cin>>y[r][c];
        }
    }
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=3;c++)
        {
            sum[r][c]=x[r][c]+y[r][c];
        }
    }
    cout<<"Sum of Matrix"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=3;c++)
        {
            cout<<sum[r][c]<<"\t";
        }
        cout<<endl;
    }
    getch();
}