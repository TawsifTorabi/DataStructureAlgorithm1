#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Singly_Linked_List{
public:
    // Create a Head Pointer
    Node *head;

    // Constructor to Create first node of the linked list
    Singly_Linked_List(int d){
        head=new Node;
        head->data = d;
        head->next = nullptr;
    }

    // Function to insert at the beginning of the list
    void InsertAtHead(int d){
        Node *temp=new Node;
        temp->data=d;
        temp->next=head;
        head=temp;
    }

    // Function to insert at the end of the list
    void InsertAtEnd(int d){
        Node* temp=new Node;
        temp->data=d;

        Node *tail=head;
        while(tail->next!=nullptr){
            tail=tail->next;
        }

        tail->next=temp;

        temp->next=nullptr;
    }

    // Function to insert value after a certain position
    void InsertAtPosition(int prev_val,int new_val){
        Node *temp=new Node;
        temp->data=new_val;

        Node *prev_node=head;
        while(prev_node->data!=prev_val){
            prev_node=prev_node->next;
        }

        temp->next=prev_node->next;

        prev_node->next=temp;
    }

    // Function to search an element in the list
    Node* searchList(int item){
        Node *temp=head;
        while(temp->next!=nullptr){
            if(temp->data==item){
                return temp;
            }
            else{
                temp=temp->next;
            }
        }
        return nullptr;
    }

    // Function to delete starting node
    void DeleteAtFirst(){
        Node *temp=head;

        head=temp->next;
        delete temp;
        return;
    }

    // Function to delete the tail node
    void DeleteAtTail(){
        Node *prev_Node=nullptr;
        Node *curr_Node=head;
        while(curr_Node->next!=nullptr){
            prev_Node=curr_Node;
            curr_Node=curr_Node->next;
        }
        prev_Node->next=nullptr;
        delete curr_Node;
        return;
    }

    // Function to delete node with a key value
    void DeleteAtPosition(int key){
        Node *temp=head;
        Node *prev=nullptr;

        if(temp->data==key){
            head=temp->next;
            delete temp;
            return;
        }
        else{
            while(temp->data!=key){
                prev=temp;
                temp=temp->next;
            }
            if(temp==nullptr){
                return;
            }
            else{
                prev->next=temp->next;
                delete temp;
            }
        }

    }

    // Function for printing the linked list
    void print(){
        Node *temp=head;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    return 0;
}


