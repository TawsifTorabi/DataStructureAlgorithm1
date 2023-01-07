#include<bits/stdc++.h>
using namespace std;
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
    
    
    
    //Delete From Middle
    int l = s.size()/2;
    for(int i)    
    stack<int> temp;
    for(int i=0; i<mid; i++){
        temp.push(s.top());
        s.pop();
    }
    s.pop();

    while(!s.empty()){
        s.push(temp.top());
        s.pop();
    
    }

    //Print Stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}


