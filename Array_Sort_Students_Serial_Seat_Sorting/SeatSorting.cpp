#include<bits/stdc++.h>
using namespace std;

void TakeInput(int &x, string msg){
    int In;
    cout << msg;
    cin >> In;
    if(In <= 100 && In > 0){
        x = In;
    }else{
        cout << "Input must be less than 100!"<<endl;
        TakeInput(x, msg);
    }
}

int main(){
    int size;
    TakeInput(size, "Input Array Size:");

    int seats[size];
    int students[size];
    
    cout<<"Enter Elements of seats Array"<<endl;
    for(int i=0;i<size;i++){
        TakeInput(seats[i], "");
    }
    
    cout<<"Enter Elements of students Array"<<endl;
    for(int i=0;i<size;i++){
        TakeInput(students[i], "");
    }
    
    
    
    int s, t = 0;
    int NumOfMove = 0;
    
    for(int i=0; i<size; i++){    
        for(int j=0; j<size-1; j++){     
            if(seats[j] > seats[j+1]){     
                s          = seats[j];      
                seats[j]   = seats[j+1];    
                seats[j+1] = s;
            }
            if(students[j] > students[j+1]){     
                t             = students[j];      
                students[j]   = students[j+1];    
                students[j+1] = t;
            }
        }
        if(seats[i] >= students[i]){
            NumOfMove += seats[i] - students[i];
        }else{
            NumOfMove += students[i] - seats[i];
        }
    }
    
    std::cout << "Number of Moves: " << NumOfMove << std::endl;
    
    return 0;
}
