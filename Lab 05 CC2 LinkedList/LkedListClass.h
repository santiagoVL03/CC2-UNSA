#ifndef LKEDLISSTCLASS_H
#define LKEDLISSTCLASS_H

#include <iostream>
using namespace std;
class Node {
public:
    int elem;
    Node* next;
};

class LinkedList{
public:
    LinkedList() { // constructor
        head = NULL;
    }
    ~LinkedList() {}; // destructor
    void addNode(int );
    void deleteNode (int );
    void display();
private:
    Node* head;
};

void LinkedList::addNode(int val)
{
    Node* newnode = new Node();
    newnode->elem = val;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void LinkedList::deleteNode(int val)
{
    if (head != NULL)
    {
        Node * ant = NULL,* temp = head;
        while ( ( temp != NULL ) && ( temp -> elem != val ) )
        {
            ant = temp;
            temp = temp -> next;
        }
        if (ant == nullptr )
        {
            head = head -> next;
            delete temp;
        }
        else if ( temp == nullptr )
        {
            cout << "No se encuentra el elemento en la lista " <<endl;
        }
        else
        {
            ant -> next = temp -> next;
            delete temp;
        }
    }
    else
    {
        cout << "Lista vacia " << endl;
    }
}

void LinkedList::display() {
    if (head == NULL) {
        cout << "Lista vacia " << endl;
    }
    else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->elem << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

#endif
