#include <iostream>
using namespace std;
// Node structure for linked list
struct Node
{
    int data;
    Node *next;
};

// Function to create a new node
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to create a linked list of given size
Node *createLinkedList(int size)
{
    Node *head = nullptr;
    Node *tail = nullptr;
    for (int i = 1; i <= size; i++)
    {
        int data;
        cout << "Enter data for node " << i << ": ";
        cin >> data;
        Node *newNode = createNode(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Empty function to pass the linked lists
void MergeSort(Node *list1, Node *list2)
{
    // Your code here

    // Create two head pointers for two lists
    Node *head1 = list1;
    Node *head2 = list2;

    Node *dummyNode = createNode(-1);

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            dummyNode->next = list1;
            dummyNode = list1;
            list1 = list1->next;
        }

        else
        {
            dummyNode->next = list2;
            dummyNode = list2;
            list2 = list2->next;
        }
    }

    if (list1)
    {
        dummyNode->next = list1;
    }
    else
    {
        dummyNode->next = list2;
    }
}

// Function to print the linked list
void printLinkedList(Node *head)
{
    cout << "Linked List: ";
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create linked list 1
    cout << "Creating linked list 1" << endl;
    Node *list1 = createLinkedList(4);

    // Create linked list 2
    cout << "Creating linked list 2" << endl;
    Node *list2 = createLinkedList(5);

    // Pass the linked lists to the empty function
    MergeSort(list1, list2);

    // Print the linked lists
    cout << "Printing linked list 1" << endl;
    printLinkedList(list1);

    cout << "Printing linked list 2" << endl;
    printLinkedList(list2);

    return 0;
}
