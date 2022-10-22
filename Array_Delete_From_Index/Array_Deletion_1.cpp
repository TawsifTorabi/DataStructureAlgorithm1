#include<iostream>
using namespace std;

int main(){

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

    cout<<"Enter Location To Delete:" << endl;
    cin>>loc;

    //Deletion
    for(int i=loc; i<s; i++){
        x[i] = x[i+1];
    }

    //Printing The New Array
    for(int i=0; i<s-1; i++){
        cout << x[i] << " ";
    }
    cout << endl;


    return 0;
}
