#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system ("color 4F");
    int n;
    cout<<"Enter Start Number to Generate Even Number From Start to 50 Number"<<"\n";
    cout<<"Enter the Number=";
    cin>>n;
    while (n<=50)
    {
        /* code */
        cout<<n<<endl;
        n=n+2;
    }
    getch();
}