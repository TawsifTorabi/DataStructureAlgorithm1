#include<iostream>
using namespace std;

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




    //Printing The Array
    for(int i=0; i<j; i++){
        cout << x[i] << " ";
    }
    cout << endl;




    //Searching
    int s, found, loc;
    cout<<"Enter Search Value:";
    cin>>s;
    for(int i=0; i<j; i++){
        if(x[i] == s){
            loc = i+1;
            found = 1;
            break;
        }
    }
    if(found == 0){
        cout << "Not Found"<< endl;
    }else{
        cout << "Found at index " << loc << endl;
    }


    return 0;
}
