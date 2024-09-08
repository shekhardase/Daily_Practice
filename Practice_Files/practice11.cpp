#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        data = 0;
        next = nullptr;
    }

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertathead(node *&head, int data)
{
    node *newnode = new node(data);
    newnode->next = head;
    head = newnode;
}

void inseratend(node *&head, int data)
{
    node *newnode = new node(data);

    if (head == nullptr)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void printList(node *&head)
{
    node *temp = head;  // No need to create a new node here
    while (temp != nullptr)
    {
        cout << temp->data << "-";
        temp = temp->next;
    }
    cout << "NULL" << endl;  // End of list
}

int main()
{
    node *head = nullptr;

    insertathead(head, 4);
    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 1);
    inseratend(head, 4);
    inseratend(head, 3);
    inseratend(head, 2);
    inseratend(head, 1);

    printList(head);  // Print the entire list
    cout << endl;

    cout << "This is head data: " << head->data << endl;
    cout << "Next of head: " << head->next << endl;

    return 0;
}
