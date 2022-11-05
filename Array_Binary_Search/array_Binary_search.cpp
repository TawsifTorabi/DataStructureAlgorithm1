#include<bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void BubbleSort(int a[],int s){
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(a[j]>a[j+1]){
                Swap(&a[j],&a[j+1]);
            }
        }
    }
}

int BinarySearch(int a[],int s,int x,int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

void PrintArray(int arr[],int Size){
    for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int Size;

    cout<<"Enter the size of the array: ";
    cin>>Size;

    int arr[Size];
    for(int i=0;i<Size;i++){
        cin>>arr[i];
    }

    BubbleSort(arr,Size);

    cout<<"The sorted array in ascending order is: "<<endl;
    PrintArray(arr,Size);

    int a;
    cout<<"Enter the element you want to search: ";
    cin>>a;

    int ck=BinarySearch(arr,Size,a,0,Size-1);
    if(ck==-1){
        cout<<"Item is not found!!!"<<endl;
    }
    else{
        cout<<"The location of the element is: "<<ck+1<<endl;
    }


    return 0;
}
