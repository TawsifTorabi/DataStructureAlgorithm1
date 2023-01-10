#include<bits/stdc++.h>
using namespace std;

//Node Structure for Linked List
struct Node {
    int data;
    struct Node *next;
};

struct LinkedList{
    Node *head;
    
    LinkedList(int d){
        Node *temp;
        head = temp;
        temp->data=d;
        temp->next=nullptr;
    }
    
    void StartNode(int d){
        head->data = d;
        head->next = nullptr;
    }
    void InsertInStart(int d){
        Node *temp = new Node;
        temp->data = d;
        temp->next = head;
        head->next = nullptr;
    }
    
    void InsertEnd(int d){
        Node *tail =head;
        while (tail -> next!= nullptr){
            tail = tail->next;
        }
    }
    
    void PrintList(){
        Node *temp;
        temp=head;
        
        while(temp!=nullptr){
            cout << temp->data << " ";
            temp = temp -> next;
        }
        
    }
};

int main(){

    LinkedList list1(10);
    list1.InsertInStart(20);
    list1.PrintList();
    list1.InsertEnd(50);
    list1.PrintList();
   
    return 0;
}
