#include <bits/stdc++.h>
using namespace std;


void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i<n-1; i++){
        // Last i elements are already in place
        for (j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j + 1]){
                Swap(&arr[j], &arr[j+1]);
                
            }
        }
    }
}


int main(){
   //Input array size
    int j;
    cout<<"Enter Array Size:";
    cin>>j;
    int x[j];

    //Traversing
    for(int i=0; i<j; i++){
        cin >> x[i];
    }

    bubbleSort(x, j);


    //Printing The Array
    for(int i=0; i<j; i++){
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}
