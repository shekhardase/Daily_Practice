// Include the iostream library to enable input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: before every standard library object
using namespace std;

// Define a class Node to represent a node in a linked list
class Node
{
public:
    // 'data' holds the value of the node
    int data;
    // 'next' is a pointer to the next node in the linked list
    Node *next;

    // Constructor for the Node class
    // It initializes 'data' with the provided value and 'next' as NULL
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// The main function where the program starts execution
int main()
{
    // Create a new node with data as 10
    Node *node1 = new Node(10);

    // Print the data of the node
    cout << node1->data << endl;
    // Print the next pointer of the node. As there is no next node, it should print NULL (or 0 in some systems)
    cout << node1->next << endl;
}