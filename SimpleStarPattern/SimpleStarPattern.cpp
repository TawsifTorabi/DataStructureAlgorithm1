#include<iostream>
#include<string>
using namespace std;

//cout is under std class
//that is why we declare a namespace std.

// cout - terminal out
// << - insertion operator
// >> - extraction operator
//cout << insertion of string or variable

int main(){
    
    int i, j;

    for(i=4; i>=0; i--){
        cout<<"*";
        for(j=i; j<=3; j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}

