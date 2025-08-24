#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(node *head)
{
    int length = 0;
    node *temp = head;

    while (temp != NULL)
    {
        // cout << temp->data << " ";
        length++;
        temp = temp->next;
    }
    return length;
}

void InsertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(node *&tail, node *&head, int position, int data)
{
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }

    node *NodeToInsert = new node(data);
    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;
}

int main()
{
    node *node1 = new node(0);
    node *head = node1;
    node *tail = node1;
    print(head);
    cout << "Length of LL " << getLength(head) << endl;
    InsertAtHead(head, 100);
    print(head);
    InsertAtTail(tail, 200);
    print(head);

    cout << "Head: " << (head ? head->data : -1) << endl;
    cout << "Tail: " << (tail ? tail->data : -1) << endl;

    InsertAtPosition(tail, head, 2, 1212);
    print(head);
    cout << "Head: " << (head ? head->data : -1) << endl;
    cout << "Tail: " << (tail ? tail->data : -1) << endl;

    InsertAtPosition(tail, head, 1, 101);
    print(head);
    cout << "Head: " << (head ? head->data : -1) << endl;
    cout << "Tail: " << (tail ? tail->data : -1) << endl;
    InsertAtPosition(tail, head, 6, 400);
    print(head);
    cout << "Head: " << (head ? head->data : -1) << endl;
    cout << "Tail: " << (tail ? tail->data : -1) << endl;
}
