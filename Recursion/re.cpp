#include<iostream>
#include<conio.h>
void pakistan(void);
void england(void);
using namespace std;
int main()
{
    system("color 4F");
cout<<"I am in Main"<<endl;
pakistan();
cout<<"Return to Again Back England Function";
getch();
}
void pakistan(void)
{
    cout<<"I am in pakistan Function"<<endl;
    england();
}
void england(void)
{
    cout<<"I am in England Function"<<endl;
}