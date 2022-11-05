#include<bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void PrintArray(int arr[],int Size){
    for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort(int a[],int size){
    int j, key;
    for(int i=1;i<size;i++){
        key = a[i];
        j = i;
        while(a[j-1] > key && j>0){
            a[j] = a[j-1];
            j--;
        }
        a[j] = key;
    }
    PrintArray(a, size);
}






int main(){
    
    int Size;

    cout<<"Enter the size of the array: ";
    cin>>Size;

    int arr[Size];
    for(int i=0;i<Size;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,Size);

    cout<<"The sorted array in ascending order is: "<<endl;
    PrintArray(arr,Size);

    return 0;
}
