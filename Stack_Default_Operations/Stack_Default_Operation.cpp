#include<bits/stdc++.h>
using namespace std;

int main(){
  
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(7);
    s.push(2);
    s.push(70);

    cout<<s.top()<<" "<<s.size()<<endl;

    s.pop();
    cout<<s.top()<<" "<<s.size()<<endl;

    if(s.empty()){
        cout<<"Stack Underflow";
    }else{
        cout<<"Stack is not Empty";
    }

    return 0;
}


