#include <bits/stdc++.h>
using namespace std;


int main(){
    
    //Define a Variable
    int a = 10;
    
    //Define a pointer
    int *ptr;
    
    //Set address of Variable to pointer
    ptr = &a;
   
   //printing pointer and address of variable
    cout << &a << endl << ptr << endl;
    
    //Pass by Reference
    cout << *ptr;
    return 0;
}
