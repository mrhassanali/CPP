#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    system("Color 5f");
    char x[25];
    cout<<"Enter the Character=";
    gets(x);
    int i=0,length=0;
    while (x[i]!='\0')
    {
        /* code */
        length++;
        i++;
    }
    cout<<"Total Characters="<<length;
    getch();
    
    
}