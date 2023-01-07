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
    
    int rows= 4,
    initVal = 38,
    tempVal = initVal;


    for(int i = 1; i <= rows; i++){
        //Print Spaces
        for(int space = 1; space <= rows-i; space++){
            cout << "   ";
        }

        if(i==0){
            cout<<tempVal << " ";
        }else{
            for(int j=1; j<=(2*i-1); j++){
                cout<<tempVal << " ";
                tempVal= tempVal+2;
            }
        }
        //Endline
        cout << endl;
    }


    return 0;
}

