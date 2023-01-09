#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node *prev;
    int data;
    Node *next;
};

struct Doubly_Linked_List{
public:

    Node* head;

    Doubly_Linked_List(int d){
        head = new Node;
        head->data = d;
        head->prev = nullptr;
        head->next = nullptr;
    }

    // Function to insert at the beginning of the list
    void InsertBegin(int d){
        Node *temp=new Node;
        temp->data=d;
        temp->next=head;
        temp->prev=nullptr;
        head=temp;
    }

    // Function to insert at the end of the list
    void InsertEnd(int d){
        Node *tail = head;

        while(tail->next != nullptr){
            tail=tail->next;
        }

        Node* temp = new Node;
        temp->data = d;
        temp->next = nullptr;

        temp->prev = tail;
        tail->next = temp;

        tail = temp;
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
    }
        return;

    // Function to delete the tail node
    void DeleteAtTail(){
        Node *prev_Node=nullptr;
        Node *curr_Node=head;
        while(curr_Node->next != nullptr){
            prev_Node=curr_Node;
            curr_Node=curr_Node->next;
        }
        prev_Node->next=nullptr;
        delete curr_Node;
        return;
    }

    // Function to delete node with a key value
    void DeleteAtPosition(int key){
        Node *temp = head;
        Node *prev = nullptr;

        if(temp->data == key){
            head=temp->next;
            delete temp;
            return;
        }else{
            while(temp->data != key){
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
    void Print(){
        Node *temp=head;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Doubly_Linked_List list1(10);

    list1.InsertEnd(5); list1.InsertEnd(6); list1.InsertEnd(7);
    list1.InsertEnd(8); list1.InsertEnd(9); list1.InsertEnd(55);

    list1.Print();

    list1.DeleteAtTail();

    list1.Print();

    list1.InsertEnd(78);

    list1.Print();

    list1.DeleteAtTail(); list1.DeleteAtTail(); list1.DeleteAtTail();

    list1.Print();

    list1.DeleteAtPosition(5);

    list1.Print();

    return 0;
}

