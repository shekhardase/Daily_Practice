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
    if (position <= 0 || head == nullptr)
    {
        cout << "Invalid position\n";
        return;
    }

    // Deleting the first node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;

        // If it was the only node
        if (temp == tail)
        {
            tail = head; // could be NULL
        }

        delete temp;
        return;
    }

    // Traverse to (position - 1)-th node
    int count = 1;
    node *prev = head;
    while (count < position - 1 && prev->next != nullptr)
    {
        prev = prev->next;
        count++;
    }

    // If next is null, position is out of bounds
    if (prev->next == nullptr)
    {
        cout << "Position out of bounds\n";
        return;
    }

    node *current = prev->next;
    prev->next = current->next;

    // If deleting tail, update tail
    if (current == tail)
    {
        tail = prev;
    }

    delete current;
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
