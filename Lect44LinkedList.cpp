// // // Include the iostream library to enable input/output operations
// // #include <iostream>

// // // Use the standard namespace to avoid prefixing std:: before every standard library object
// // using namespace std;

// // // Define a class Node to represent a node in a linked list
// // class Node
// // {
// // public:
// //     // 'data' holds the value of the node
// //     int data;
// //     // 'next' is a pointer to the next node in the linked list
// //     Node *next;

// //     // Constructor for the Node class
// //     // It initializes 'data' with the provided value and 'next' as NULL
// //     Node(int value)
// //     {
// //         data = value;
// //         next = NULL;
// //     }
// // };

// // // The main function where the program starts execution
// // int main()
// // {
// //     // Create a new node with data as 10
// //     Node *node1 = new Node(10);

// //     // Print the data of the node
// //     cout << node1->data << endl;
// //     // Print the next pointer of the node. As there is no next node, it should print NULL (or 0 in some systems)
// //     cout << node1->next << endl;
// // }

// // ------------------------------------------------------------------------------------------------------

// // #include <iostream>
// // using namespace std;

// // // Define a class named 'node' to represent a linked list node
// // class node
// // {
// // public:
// //     int data;   // Data stored in the node
// //     node *next; // Pointer to the next node in the linked list
// // };

// // // Main function where the program execution begins
// // int main()
// // {
// //     // Dynamically allocate memory for a new 'node' object and assign its address to 'node1'
// //     node *node1 = new node();
// //     node1->data = 10;

// //     // create new node
// //     node *node2 = new node();
// //     node2->data = 20;

// //     // Linking nodes
// //     node1->next = node2;

// //     // Print the value of the 'data' member of the 'node1' object (contains uninitialized data)
// //     cout << "Data1: " << node1->data << endl;
// //     cout << "Data2: " << node2->data << endl;

// //     // Print the value of the 'next' pointer of the 'node1' object (points to an undefined memory location)
// //     cout << "Next1: " << node1->next << endl;
// //     cout << "Next2: " << node2->next << endl;

// //     // Note: Memory allocated using 'new' should be explicitly deallocated with 'delete' in a real-world scenario
// // }

// // -----------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// // Define a class named 'node' to represent a linked list node
// class node
// {
// public:
//     int data;   // Data stored in the node
//     node *next; // Pointer to the next node in the linked list

//     // constructor
//     node(int data)
//     {
//         this->data = data;
//         this->next = nullptr; // or this->next = NULL; for older C++
//     }

// //    Whenever this constructor is called, it will add data to the node and initialize the next pointer to null, indicating that there is no next node
//     // whenever new node created constructor call hoga  adding data and pointing to null
// };

// // Main function where the program execution begins
// int main()
// {
//     // Dynamically allocate memory for a new 'node' object and assign its address to 'node1'
//     node *node1 = new node(100);
//     node *node2 = new node(10);
//     cout << node1->data << endl;
//     cout << node2->data << endl;
//     cout << node1->next << endl;
//     cout << node2->next << endl;
// }

// -------------------------------- ADD ONE MORE NODE ---------------------------------------

#include <iostream>
using namespace std;

class nunnu
{
public:
    int value;
    nunnu *pudha;

    // constructor

    nunnu(int value)
    {
        this->value = value;
        this->pudha = NULL;
    }
};

void insertathead(nunnu *&head, int d) // here we took reference beacuse we dont want to crate copy of linked list
{
    // new node created                                   // we want to add new node to existing linked list
    nunnu *temp = new nunnu(d);
    temp->pudha = head;
    head = temp;
}

void print(nunnu *&head)
{
    nunnu *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->pudha;
    }
    cout << endl;
}

int main()
{
    nunnu *node1 = new nunnu(100);
    cout << node1->value << endl;
    cout << node1->pudha << endl;

    // head pointed to node1
    nunnu *head = node1;

    print(head);
    insertathead(head, 13);
    print(head);
    insertathead(head, 1);
    print(head);
}
