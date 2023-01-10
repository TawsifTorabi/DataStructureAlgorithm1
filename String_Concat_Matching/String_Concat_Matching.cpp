#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char Size = 2;
    string word1[Size];
    string word2[Size];
    
    cout<<"Enter Elements of word1 Array: ";
    for(int i=0;i<Size;i++){
        cin>>word1[i];
    }
    
    cout<<"Enter Elements of word2 Array: ";
    for(int i=0;i<Size;i++){
        cin>>word2[i];
    }
    
    string a, b;
    
    for(int i=0;i<Size;i++){
        a = a + word1[i];
        b = b + word2[i];
    }
    
    if(a == b){
        std::cout << "true" << std::endl;
    }else{
        std::cout << "false" << std::endl;
    }
    
    return 0;
}






