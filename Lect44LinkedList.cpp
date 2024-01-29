// // // // // // // Include the iostream library to enable input/output operations
// // // // // // #include <iostream>

// // // // // // // Use the standard namespace to avoid prefixing std:: before every standard library object
// // // // // // using namespace std;

// // // // // // // Define a class Node to represent a node in a linked list
// // // // // // class Node
// // // // // // {
// // // // // // public:
// // // // // //     // 'data' holds the data of the node
// // // // // //     int data;
// // // // // //     // 'next' is a pointer to the next node in the linked list
// // // // // //     Node *next;

// // // // // //     // Constructor for the Node class
// // // // // //     // It initializes 'data' with the provided data and 'next' as NULL
// // // // // //     Node(int data)
// // // // // //     {
// // // // // //         data = data;
// // // // // //         next = NULL;
// // // // // //     }
// // // // // // };

// // // // // // // The main function where the program starts execution
// // // // // // int main()
// // // // // // {
// // // // // //     // Create a new node with data as 10
// // // // // //     Node *node1 = new Node(10);

// // // // // //     // Print the data of the node
// // // // // //     cout << node1->data << endl;
// // // // // //     // Print the next pointer of the node. As there is no next node, it should print NULL (or 0 in some systems)
// // // // // //     cout << node1->next << endl;
// // // // // // }

// // // // // // ------------------------------------------------------------------------------------------------------

// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // // Define a class named 'node' to represent a linked list node
// // // // // // class node
// // // // // // {
// // // // // // public:
// // // // // //     int data;   // Data stored in the node
// // // // // //     node *next; // Pointer to the next node in the linked list
// // // // // // };

// // // // // // // Main function where the program execution begins
// // // // // // int main()
// // // // // // {
// // // // // //     // Dynamically allocate memory for a new 'node' object and assign its address to 'node1'
// // // // // //     node *node1 = new node();
// // // // // //     node1->data = 10;

// // // // // //     // create new node
// // // // // //     node *node2 = new node();
// // // // // //     node2->data = 20;

// // // // // //     // Linking nodes
// // // // // //     node1->next = node2;

// // // // // //     // Print the data of the 'data' member of the 'node1' object (contains uninitialized data)
// // // // // //     cout << "Data1: " << node1->data << endl;
// // // // // //     cout << "Data2: " << node2->data << endl;

// // // // // //     // Print the data of the 'next' pointer of the 'node1' object (points to an undefined memory location)
// // // // // //     cout << "Next1: " << node1->next << endl;
// // // // // //     cout << "Next2: " << node2->next << endl;

// // // // // //     // Note: Memory allocated using 'new' should be explicitly deallocated with 'delete' in a real-world scenario
// // // // // // }

// // // // // // -----------------------------------------------------------------------------------------------------------------------

// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // // Define a class named 'node' to represent a linked list node
// // // // // class node
// // // // // {
// // // // // public:
// // // // //     int data;   // Data stored in the node
// // // // //     node *next; // Pointer to the next node in the linked list

// // // // //     // constructor
// // // // //     node(int data)
// // // // //     {
// // // // //         this->data = data;
// // // // //         this->next = nullptr; // or this->next = NULL; for older C++
// // // // //     }

// // // // // //    Whenever this constructor is called, it will add data to the node and initialize the next pointer to null, indicating that there is no next node
// // // // //     // whenever new node created constructor call hoga  adding data and pointing to null
// // // // // };

// // // // // // Main function where the program execution begins
// // // // // int main()
// // // // // {
// // // // //     // Dynamically allocate memory for a new 'node' object and assign its address to 'node1'
// // // // //     node *node1 = new node(100);
// // // // //     node *node2 = new node(10);
// // // // //     cout << node1->data << endl;
// // // // //     cout << node2->data << endl;
// // // // //     cout << node1->next << endl;
// // // // //     cout << node2->next << endl;
// // // // // }

// // // // // -------------------------------- ADD ONE MORE NODE ---------------------------------------

// // // // #include <iostream>
// // // // using namespace std;

// // // // class node
// // // // {
// // // // public:
// // // //     int data;
// // // //     node *next;

// // // //     // constructor

// // // //     node(int data)
// // // //     {
// // // //         this->data = data;
// // // //         this->next = NULL;
// // // //     }
// // // // };

// // // // void insertathead(node *&head, int d) // here we took reference beacuse we dont want to crate copy of linked list
// // // // {
// // // //     // new node created                                   // we want to add new node to existing linked list
// // // //     node *temp = new node(d);
// // // //     temp->next = head;
// // // //     head = temp;
// // // // }

// // // // void print(node *&head)
// // // // {
// // // //     node *temp = head;

// // // //     while (temp != NULL)
// // // //     {
// // // //         cout << temp->data << " ";
// // // //         temp = temp->next;
// // // //     }
// // // //     cout << endl;
// // // // }

// // // // int main()
// // // // {
// // // //     node *node1 = new node(100);
// // // //     cout << node1->data << endl;
// // // //     cout << node1->next << endl;

// // // //     // head pointed to node1
// // // //     node *head = node1;

// // // //     print(head);
// // // //     insertathead(head, 13);
// // // //     print(head);
// // // //     insertathead(head, 1);
// // // //     print(head);
// // // // }

// // // // // -----------------------------------------------------------------------------------------------------------------------------------------

// // // // #include <iostream>
// // // // using namespace std;

// // // // class node
// // // // {

// // // // public:
// // // //     string str;
// // // //     node *next;

// // // //     // void setData(string s){
// // // //     //     str = s;
// // // //     //     next = NULL;
// // // //     // }

// // // //     node(string d)
// // // //     {
// // // //         str = d;
// // // //         next = NULL;
// // // //     }
// // // // };

// // // // int main()
// // // // {
// // // //     node *n1 = new node("Anup");
// // // //     node *n2 = new node("Shekhar");
// // // //     node *n3 = new node("salman");

// // // //     // n1->next =

// // // //     n1->next = n2;
// // // //     n2->next = n3;
// // // //     n3->next = NULL;

// // // // }

// // // // --------------------------------------------------------------------------------------------

// // // // #include <iostream>
// // // // using namespace std;

// // // // class node
// // // // {
// // // // public:
// // // //     int data;
// // // //     node *next;

// // // //     node(int data)
// // // //     {
// // // //         this->data = data;
// // // //         this->next = NULL;
// // // //     }
// // // // };

// // // // int main()
// // // // {
// // // //     node *n1 = new node(10);
// // // //     node *n2 = new node(11);
// // // //     cout << n1->data << endl;
// // // //     cout << n2->data << endl;
// // // //     cout << n1->next << endl;
// // // //     cout << n2->next << endl;
// // // //     n1->next = n2;
// // // //     n2->next = NULL;
// // // //     cout<<n1->next<<endl;
// // // //     // cout<<*n2<<endl;
// // // //     cout<<n2<<endl;
// // // // }

// // // // -------------------------------------------------------------------

// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // class node
// // // // {
// // // // public:
// // // //     int data;
// // // //     node *next;

// // // //     node(int data)
// // // //     {
// // // //         this->data = data;
// // // //         this->next = NULL;
// // // //     }
// // // // };

// // // // void InertAtHead(node* &doka , int n)
// // // // {
// // // //     //new node creation
// // // //     node* temp = new node(n);
// // // //     temp->next = doka;
// // // //     doka = temp;
// // // // }

// // // // int main()
// // // // {
// // // //     node *n1 = new node(100);

// // // //     cout << n1->data << endl;
// // // //     cout << n1->next << endl;
// // // // }

// // // // ----------------------------------------------------------------------------

// // // #include <iostream>
// // // using namespace std;

// // // class node
// // // {
// // // public:
// // //     int data;
// // //     node *next ;

// // //     node(int data)
// // //     {
// // //         this->data = data;
// // //         this->next = NULL;
// // //     }
// // // };

// // // int main()
// // // {
// // //     node *n1 = new node(1000);
// // //     node n2 = node(10);

// // //     cout << n1->next << endl;
// // //     cout << n2.next << endl;
// // //     cout << n1->data << endl;
// // //     cout << n2.data << endl;
// // // }

// // // ==================================================================

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

// //     ~node()
// //     {
// //         int value = this->data;
// //         // memory free
// //         if (this->next != NULL)
// //         {
// //             delete next;
// //             this->next = NULL;
// //         }
// //         cout << "Memory is free for node with data = " << value << endl;
// //     }
// // };

// // void insertathead(node *&head, int d)
// // {
// //     // new node create

// //     node *temp = new node(d); // new node temp created with data d
// //     temp->next = head;        // temp is now pointing to previous node n1
// //     head = temp;              // now applying head to temp
// // } // now temp is head of linked list

// // void insertattail(node *&tail, int d)
// // {
// //     node *temp = new node(d);
// //     tail->next = temp;
// //     tail = temp;
// // }

// // void insertAtPosition(node *&head, node *&tail, int position, int d)
// // {
// //     // insert at start
// //     if (position == 0)
// //     {
// //         insertathead(head, d);
// //         return;
// //     }
// //     node *temp = head;
// //     int count = 0;
// //     while (count < position - 1)
// //     {
// //         temp = temp->next;
// //         count++;
// //         // taking adress to insert in temp
// //     }

// //     // insert at last position
// //     if (temp->next == NULL)
// //     {
// //         insertattail(tail, d);
// //         return;
// //     }

// //     // creating a node for d for insert
// //     node *nodeToInsert = new node(d);
// //     nodeToInsert->next = temp->next;
// //     temp->next = nodeToInsert;
// // }

// // void print(node *&head)
// // {
// //     node *temp = head; // new node at with head address

// //     while (temp != NULL)
// //     {
// //         cout << temp->data << " "; // printing current node ;
// //         temp = temp->next;         // applying next address to temp
// //     }

// //     cout << endl;
// // }

// // void deleteNode(int position, node *&head)
// // {
// //     // deleting first or start node
// //     if (position == 1)
// //     {
// //         node *temp = head;
// //         head = head->next;

// //         // memory free start node
// //         temp->next = NULL;
// //         delete temp;
// //     }
// //     else
// //     {
// //         // delete any middle node or last node

// //         node *current = head;
// //         node *previous = NULL;

// //         int count = 1;
// //         while (count < position)
// //         {
// //             previous = current;
// //             current = current->next;
// //             count++;
// //         }
// //         previous->next = current->next;
// //         current->next = NULL;
// //         delete current;
// //     }
// // }

// // int main()
// // {
// //     node *n1 = new node(1);
// //     // cout << n1 << endl;       // address of n1
// //     // cout << n1->next << endl; // pointing to this address
// //     // cout << n1->data << endl; // data containing in n1

// //     node *head = n1; // head pointer pointing to n1
// //     node *tail = n1;

// //     // // cout << head << endl; // address of n1 aka head pointer;

// //     // print(head);

// //     // insertathead(head, 2);
// //     // insertattail(tail, 3);
// //     // insertattail(tail, 5);
// //     // print(head);

// //     // insertAtPosition(head, tail, 2, 4);
// //     // print(head);
// //     // insertAtPosition(head, tail, 0, 0);
// //     // print(head);

// //     // cout << head->data << endl;
// //     // cout << tail->data << endl;

// //     // deleteNode(4, head);

// //     // print(head);
// //     // deleteNode(1, head);

// //     print(head);
// //     insertathead(head, 2);
// //     insertathead(head, 3);
// //     insertathead(head, 4);
// //     insertathead(head, 4);
// //     insertathead(head, 5);
// //     print(head);
// //     // node *temp = head;
// //     node *temp = head;
// //     // node *prev = head;
// //     while (temp != nullptr)
// //     {
// //         if (temp->next != nullptr &&   temp->data == temp->next->data)
// //         {
// //             cout << temp->data;
// //         }
// //         temp = temp->next;
// //     }
// //     // return -1;
// // }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;
//     node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // gives length of linked list
// int getlength(node *head)
// {
//     int count = 0;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void insertathead(node *&head, int d)
// {
//     if (head == NULL)
//     {
//         node *temp = new node(d);
//         head = temp;
//     }
//     else
//     {
//         node *temp = new node(d);
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }
// }

// void insertattail(node *&tail, int d)
// {
//     if (tail == NULL)
//     {
//         node *temp = new node(d);
//         tail = temp;
//     }
//     else
//     {
//         node *temp = new node(d);
//         tail->next = temp;
//         temp->prev = tail;
//         tail = temp;
//     }
// }

// void insertatposition(node *&head, node *&tail, int position, int n)
// {

//     if (position == 0)
//     {
//         insertathead(head, n);
//         return;
//     }
//     node *temp = head;

//     int count = 1;
//     while (count < position)
//     {
//         temp = temp->next;
//         count++;
//     }

//     // inserting at last position
//     if (temp->next == NULL)
//     {
//         insertattail(tail, n);
//         return;
//     }

//     node *nodeToInsert = new node(n);
//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }

// int main()
// {
//     node *n1 = new node(10);
//     node *head = n1;
//     node *tail = n1;
//     print(n1);
//     cout << getlength(head) << endl;
//     insertattail(tail, 11);
//     print(head);
//     insertattail(tail, 25);
//     print(head);
//     insertatposition(head, tail, 2, 5);
//     print(head);
// }

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of Linked List
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}
void insertAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    // cout << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtHead(tail, head, 13);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtHead(tail, head, 8);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtTail(tail, head, 25);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    deleteNode(7, head);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    return 0;
}