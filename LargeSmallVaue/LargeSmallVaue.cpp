#include<iostream>
#include<conio.h>
using namespace std;
void largevalue(void);
int main()
{
    largevalue();
    getch();
}

void largevalue(void){

int a,i,size,large,small;

cout<<"Input the Size of Array = "<<endl;
cin>>size;
int x[size];

cout<<"Enter the "<<size<<" Numbers"<<endl;
    for(i=0; i<size; i++){
        cin>>a;
        x[i] = a;
    }

    large = x[0];
     for(i=0; i<size; i++){
        if(x[i]>large){
            large = x[i];
        }
    }
    cout<<"Large Number = "<<large<<endl;

    small = x[0];
     for(i=0; i<size; i++){
        if(x[i]<small){
            small = x[i];
        }
    }
cout<<"Small Number = "<<small<<endl;
}