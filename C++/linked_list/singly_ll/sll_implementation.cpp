#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int item;
    Node *next;

    // constructor for a new node
    Node()
    {
        item = 0;
        next = NULL;
    }

    // constructor with parameter
    Node(int n)
    {
        item = n;
        next = NULL;
    }
};

class LinkedList
{
public:
    int size;
    Node *head;
    Node *tail;
    LinkedList()
    {
        this->size = 0;
        head = NULL;
        tail = NULL;
    }

    // empty method to check if the list is empty
    bool empty();

    // push_back insert the elements in the last of the list
    void push_back(int );

    // print method prints the linked list
    void print();

    // print_size prints the current size of the list
    void print_size()
    {
        cout << "The current size of the list is " << this->size << "\n";
    }

    //push_front insert the elements in the last of the linked list
    void push_front(int );

    //front return the starting element of the list
    int front();

    //back return the last element of the list
    int back();

    // remove return the element of the specified index starting from 0th index
    void remove(int );
};

bool LinkedList::empty()
{
    if (this->size == 0)
        return true;
    else
        return false;
}

void LinkedList::print()
{
    Node *temp = head;
    if (empty())
    {
        cout << "List is empty\n";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->item << "-->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
}

void LinkedList::push_back(int n)
{
    Node *temp = new Node(n);
    if (empty())
    {
        this->head = temp;
        this->tail = temp;
        this->size++;
    }
    else
    {
        tail->next = temp;
        this->tail = temp;
        this->size++;
    }
}

void LinkedList::push_front(int n){
    Node * temp= new Node(n);
    if (empty())
    {
        this->head = temp;
        this->tail = temp;
        this->size++;
    }
    else
    {
        temp->next = head;
        this->head = temp;
        this->size++;
    }

}
int LinkedList::front(){
    if (empty()) return 0;
    else return this->head->item;
}
int LinkedList::back(){
    if (empty()) return 0;
    else return this->tail->item;
}

void LinkedList::remove(int n){
    Node* temp= head;
    if (empty())
    {
        cout<<"List is empty, can't remove from an empty list\n";
    }else if(this->size==1){
        this->head=NULL;
        this->tail=NULL;
    }
    else
    {
        while(this->head != NULL){
            
        }
    }

}



int main()
{

    LinkedList ll;

    ll.print();
    ll.push_back(5);
    ll.print();
    ll.push_back(6);
    ll.print();
    ll.print_size();
    ll.push_front(33);
    ll.print();

    return 0;
}