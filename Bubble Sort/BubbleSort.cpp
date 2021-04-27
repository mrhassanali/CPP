#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
    system ("color 2F");
    int number,size,array,i,j;
    cout<<"Enter the Size of Array =";
    cin>>size;
    int x[size];
    cout<<"Enter the "<<size<<" Number \n";
    for(i=0; i<size; i++){
        cout<<"x["<<i<<"] = ";
        cin>>array;
        x[i]= array;
    }
    for(i=0; i<size; i++){
        for(j=0; j<size-1; j++){
            if(x[j]>x[j+1]){
                int temp;
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Array\n";
    for(i=0; i<size; i++){
        cout<<x[i]<<",";
    }
    getch();
}