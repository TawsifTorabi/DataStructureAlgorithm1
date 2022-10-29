#include<iostream>
using namespace std;
//write a C++ Program to find all pairs of elements in an array whose sum equals a specified number.
//Without Repeating

int main(){
    int size,i,j,k,a,b;
    cout<<"Enter Array Size:";
    cin>>size;

    int arr[size];

    cout<<"Enter Array Elements:";
    for(i=0; i<=size; i++){
        cin>>arr[i];
    }

    int specified_number = 15;


    for(i=0;i<=size;i++){
        a = arr[i];
        for(j=0;j<=i;j++){
            b = arr[j];
            if((a+b) == specified_number){
               cout<<a<<"+"<<b<<"= 15"<<"\n";
            }
        }
    }
}
