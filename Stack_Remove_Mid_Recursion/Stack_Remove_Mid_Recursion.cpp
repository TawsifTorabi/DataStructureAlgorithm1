#include<bits/stdc++.h>
using namespace std;

void remove_mid(stack<int> &inputStack, int Count, int Size){
    //Base Condition
    if(Count == Size/2){
        inputStack.pop();
        return;
    }
    int m = inputStack.top();
    inputStack.pop();
    
    //Recursive Condition
    remove_mid(inputStack, Count+1, Size);
}

int main(){
    stack<int> s;
    int num;
    cout<<"Number of Element you want to Push?";
    cin>>num;
    cout<<"Enter Elements:";
    for(int i=0; i<num; i++){
        int temp;
        cin>>temp;
        s.push(temp);
    }
    
    //Call remove_mid() function
    remove_mid(s, 0, s.size());

    //Print Stack
    cout<<"The Stack Elements Are: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}


