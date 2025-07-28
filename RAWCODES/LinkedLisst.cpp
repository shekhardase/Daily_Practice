#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(int data, node *&head)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtEnd(int data, node *&tail)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ---> ";
        temp = temp->next;
    }
    cout << endl;
}

void inserAtPosition(node *&head, node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(data, head);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtEnd(data, tail);
        return;
    }

    node *insertNode = new node(data);
    insertNode->next = temp->next;
    temp->next = insertNode;
}
void deleteNode(node *&head, node *&tail, int position)
{

    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // Traverse to (position - 1)-th node
        int count = 1;
        node *current = head;
        node *prev = NULL;

        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            cout << "Position out of bound " << endl;
            return; 
        }

        if (current == tail)
        {
            tail = prev;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    node *n1 = new node(1);
    node *tail = n1;
    node *head = n1;

    insertAtHead(0, head);
    insertAtHead(-1, head);
    insertAtHead(-2, head);

    insertAtEnd(2, tail);
    inserAtPosition(head, tail, 4, 6);

    deleteNode(head, tail, 3);
    deleteNode(head, tail, 5);
    deleteNode(head, tail, 1);

    print(head);

    cout << "Head: " << (head ? head->data : -1) << endl;
    cout << "Tail: " << (tail ? tail->data : -1) << endl;

    return 0;
}
