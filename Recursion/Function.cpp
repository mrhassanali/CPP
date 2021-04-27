#include<iostream>
#include<conio.h>
using namespace std;
void pakistan(void);
void england(void);
int main()
{
    cout<<"I am in Main"<<endl;
    pakistan();
    cout<<"Back in Main";
    getch();
}
void pakistan(void)
{
    cout<<"I love Pakistan"<<endl;
    england();
    cout<<"I am back in Pakistan"<<endl;
}
void england(void)
{
    cout<<"I am in England Function"<<endl;
    cout<<"Going to England"<<"\n";
    cout<<"I am Back toward Main"<<endl;
}