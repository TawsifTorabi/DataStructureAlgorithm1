#include<iostream>
using namespace std;

int main(){
    //Insertion
    int s;
    cout << "Input Array Size:" << endl;
    cin >> s;
    int x[s+1];
    int loc, item;

    cout << "Input Array Elements:" << endl;
    //Traversing
    for(int i=0; i<s; i++){
        cin >> x[i];
    }

    //Printing The Array
    for(int i=0; i<s; i++){
        cout << x[i] << " ";
    }
    cout << endl;



    cout<<"Enter Value to Insert:" << endl;
    cin>>item;


    cout<<"Enter Location:" << endl;
    cin>>loc;


    int temp;

    for(int i=0; i<s; i++){
        if(i==loc-1){
            temp = x[i+1];
            x[i+1] = x[i];
        }
    }
    x[loc] = item;
    x[loc+1] = temp;

    //Printing The New Array
    for(int i=0; i<s+1; i++){
        cout << x[i] << " ";
    }
    cout << endl;


    return 0;
}
