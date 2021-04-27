#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main() {
      system("Color 5f");
      int first, second, temp;
      cout<<"Enter Value of A = ";
      cin>>first;
      cout<<"Enter Value of B = ";
      cin>>second;


      temp = first;
      first = second;
      second = temp;

      cout<<"A = "<<first<<"\n";
      cout<<"B = "<<second;
      getch();
}

