#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cout<<"Enter the string you want to reverse: ";
    cin>>st;

    stack<char> s;
    stack<char> t;
    for(int i=0; i<st.length(); i++){
        s.push(st[i]);
    }

    cout<<s.size()<<endl;

    while(!s.empty()){
        cout<<s.top();
        t.push(s.top());
        s.pop();
    }

    cout<<endl;
    return 0;
}

