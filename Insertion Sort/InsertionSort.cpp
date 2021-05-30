#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,j,current,n,inputnumber;
    cout<<"Enter the Total Number"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the Number ="<<n<<endl;
    for(i=0; i<n; i++){
        cout<<"a["<<i<<"] = ";
        cin>>inputnumber;
        a[i]=inputnumber;
    }
    for(i=1; i<n; i++){
        current = a[i];
        j = i-1;
        while(j>=0 && a[j]>current){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<"Insertion Sort = ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    getch();

}