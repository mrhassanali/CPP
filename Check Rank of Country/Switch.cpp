#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the Number to search country Rank\n";
    int i;
    system("Color 2f");
    cout<<"Enter the Value in Number to Search Rank=";
    cin>>i;
    switch (i)
    {
    case 1:
    cout<<"Pakistan";
        break;
    case 2:
    cout<<"America";
        break;
    
    default:
    cout<<"Not Searching";
        break;
    }
    getch();
}