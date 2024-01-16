// // // // // Include the iostream library to enable input/output operations
// // // // #include <iostream>

// // // // // Use the standard namespace to avoid prefixing std:: before every standard library object
// // // // using namespace std;

// // // // // Define a class Node to represent a node in a linked list
// // // // class Node
// // // // {
// // // // public:
// // // //     // 'data' holds the data of the node
// // // //     int data;
// // // //     // 'next' is a pointer to the next node in the linked list
// // // //     Node *next;

// // // //     // Constructor for the Node class
// // // //     // It initializes 'data' with the provided data and 'next' as NULL
// // // //     Node(int data)
// // // //     {
// // // //         data = data;
// // // //         next = NULL;
// // // //     }
// // // // };

// // // // // The main function where the program starts execution
// // // // int main()
// // // // {
// // // //     // Create a new node with data as 10
// // // //     Node *node1 = new Node(10);

// // // //     // Print the data of the node
// // // //     cout << node1->data << endl;
// // // //     // Print the next pointer of the node. As there is no next node, it should print NULL (or 0 in some systems)
// // // //     cout << node1->next << endl;
// // // // }

// // // // ------------------------------------------------------------------------------------------------------

// // // // #include <iostream>
// // // // using namespace std;

// // // // // Define a class named 'node' to represent a linked list node
// // // // class node
// // // // {
// // // // public:
// // // //     int data;   // Data stored in the node
// // // //     node *next; // Pointer to the next node in the linked list
// // // // };

// // // // // Main function where the program execution begins
// // // // int main()
// // // // {
// // // //     // Dynamically allocate memory for a new 'node' object and assign its address to 'node1'
// // // //     node *node1 = new node();
// // // //     node1->data = 10;

// // // //     // create new node
// // // //     node *node2 = new node();
// // // //     node2->data = 20;

// // // //     // Linking nodes
// // // //     node1->next = node2;

// // // //     // Print the data of the 'data' member of the 'node1' object (contains uninitialized data)
// // // //     cout << "Data1: " << node1->data << endl;
// // // //     cout << "Data2: " << node2->data << endl;

// // // //     // Print the data of the 'next' pointer of the 'node1' object (points to an undefined memory location)
// // // //     cout << "Next1: " << node1->next << endl;
// // // //     cout << "Next2: " << node2->next << endl;

// // // //     // Note: Memory allocated using 'new' should be explicitly deallocated with 'delete' in a real-world scenario
// // // // }

// // // // -----------------------------------------------------------------------------------------------------------------------

// // // #include <iostream>
// // // using namespace std;

// // // // Define a class named 'node' to represent a linked list node
// // // class node
// // // {
// // // public:
// // //     int data;   // Data stored in the node
// // //     node *next; // Pointer to the next node in the linked list

// // //     // constructor
// // //     node(int data)
// // //     {
// // //         this->data = data;
// // //         this->next = nullptr; // or this->next = NULL; for older C++
// // //     }

// // // //    Whenever this constructor is called, it will add data to the node and initialize the next pointer to null, indicating that there is no next node
// // //     // whenever new node created constructor call hoga  adding data and pointing to null
// // // };

// // // // Main function where the program execution begins
// // // int main()
// // // {
// // //     // Dynamically allocate memory for a new 'node' object and assign its address to 'node1'
// // //     node *node1 = new node(100);
// // //     node *node2 = new node(10);
// // //     cout << node1->data << endl;
// // //     cout << node2->data << endl;
// // //     cout << node1->next << endl;
// // //     cout << node2->next << endl;
// // // }

// // // -------------------------------- ADD ONE MORE NODE ---------------------------------------

// // #include <iostream>
// // using namespace std;

// // class node
// // {
// // public:
// //     int data;
// //     node *next;

// //     // constructor

// //     node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };

// // void insertathead(node *&head, int d) // here we took reference beacuse we dont want to crate copy of linked list
// // {
// //     // new node created                                   // we want to add new node to existing linked list
// //     node *temp = new node(d);
// //     temp->next = head;
// //     head = temp;
// // }

// // void print(node *&head)
// // {
// //     node *temp = head;

// //     while (temp != NULL)
// //     {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }
// //     cout << endl;
// // }

// // int main()
// // {
// //     node *node1 = new node(100);
// //     cout << node1->data << endl;
// //     cout << node1->next << endl;

// //     // head pointed to node1
// //     node *head = node1;

// //     print(head);
// //     insertathead(head, 13);
// //     print(head);
// //     insertathead(head, 1);
// //     print(head);
// // }

// // // -----------------------------------------------------------------------------------------------------------------------------------------

// // #include <iostream>
// // using namespace std;

// // class node
// // {

// // public:
// //     string str;
// //     node *next;

// //     // void setData(string s){
// //     //     str = s;
// //     //     next = NULL;
// //     // }

// //     node(string d)
// //     {
// //         str = d;
// //         next = NULL;
// //     }
// // };

// // int main()
// // {
// //     node *n1 = new node("Anup");
// //     node *n2 = new node("Shekhar");
// //     node *n3 = new node("salman");

// //     // n1->next =

// //     n1->next = n2;
// //     n2->next = n3;
// //     n3->next = NULL;

// // }

// // --------------------------------------------------------------------------------------------

// // #include <iostream>
// // using namespace std;

// // class node
// // {
// // public:
// //     int data;
// //     node *next;

// //     node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };

// // int main()
// // {
// //     node *n1 = new node(10);
// //     node *n2 = new node(11);
// //     cout << n1->data << endl;
// //     cout << n2->data << endl;
// //     cout << n1->next << endl;
// //     cout << n2->next << endl;
// //     n1->next = n2;
// //     n2->next = NULL;
// //     cout<<n1->next<<endl;
// //     // cout<<*n2<<endl;
// //     cout<<n2<<endl;
// // }

// // -------------------------------------------------------------------

// // #include <bits/stdc++.h>
// // using namespace std;

// // class node
// // {
// // public:
// //     int data;
// //     node *next;

// //     node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };

// // void InertAtHead(node* &doka , int n)
// // {
// //     //new node creation
// //     node* temp = new node(n);
// //     temp->next = doka;
// //     doka = temp;
// // }

// // int main()
// // {
// //     node *n1 = new node(100);

// //     cout << n1->data << endl;
// //     cout << n1->next << endl;
// // }

// // ----------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next ;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     node *n1 = new node(1000);
//     node n2 = node(10);

//     cout << n1->next << endl;
//     cout << n2.next << endl;
//     cout << n1->data << endl;
//     cout << n2.data << endl;
// }

// ==================================================================

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node *&head, int d)
{
    // new node create

    node *temp = new node(d); // new node temp created with data d
    temp->next = head;        // temp is now pointing to previous node n1
    head = temp;              // now applying head to temp
} // now head of linked list is temp

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node *&head)
{
    node *temp = head; // new node at with head address

    while (temp != NULL)
    {
        cout << temp->data << " "; // printing current node ;
        temp = temp->next;         // applying next address to temp
    }
    cout << endl;
}

int main()
{
    node *n1 = new node(100);
    // cout << n1 << endl;       // address of n1
    // cout << n1->next << endl; // pointing to this address
    // cout << n1->data << endl; // data containing in n1

    node *head = n1; // head pointer pointing to n1
    node *tail = n1;

    // cout << head << endl; // address of n1 aka head pointer;

    print(head);

    insertathead(head, 12);
    insertattail(tail, 13);
    insertathead(head, 13);
    print(head);
}