// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // class NODE
// // // // // {
// // // // // public:
// // // // //     int data;
// // // // //     NODE *nxt;

// // // // //     // constructor call
// // // // //     NODE(int data)
// // // // //     {
// // // // //         this->data = data;
// // // // //         this->nxt = NULL;
// // // // //     }
// // // // // };

// // // // // void print(NODE *head)
// // // // // {
// // // // //     NODE *temp = head;
// // // // //     while (temp != NULL)
// // // // //     {
// // // // //         cout << temp->data << " ";
// // // // //         temp = temp->nxt;
// // // // //     }
// // // // //     cout << endl;
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     NODE *N1 = new NODE(1);
// // // // //     NODE *N2 = new NODE(2);
// // // // //     NODE *N3 = new NODE(3);
// // // // //     NODE *N4 = new NODE(4);
// // // // //     NODE *N5 = new NODE(5);
// // // // //     NODE *N6 = new NODE(6);

// // // // //     // Set head to one of the nodes
// // // // //     NODE *head = N1;

// // // // //     N1->nxt = N2;
// // // // //     N2->nxt = N3;
// // // // //     N3->nxt = N4;
// // // // //     N4->nxt = N5;
// // // // //     N5->nxt = N6;
// // // // //     // Set the last node's next to NULL
// // // // //     N6->nxt = NULL;

// // // // //     print(head);

// // // // //     return 0;

// // // // // }

// // // // // Find middle of linked list

// // // // // circular or not

// // // // #include <iostream>
// // // // #include <map>
// // // // using namespace std;

// // // // class Node
// // // // {
// // // // public:
// // // //     int data;
// // // //     Node *next;

// // // //     // constrcutor
// // // //     Node(int d)
// // // //     {
// // // //         this->data = d;
// // // //         this->next = NULL;
// // // //     }

// // // //     ~Node()
// // // //     {
// // // //         int value = this->data;
// // // //         if (this->next != NULL)
// // // //         {
// // // //             delete next;
// // // //             next = NULL;
// // // //         }
// // // //         cout << " memory is free for node with data " << value << endl;
// // // //     }
// // // // };

// // // // void insertNode(Node *&tail, int element, int d)
// // // // {

// // // //     // empty list
// // // //     if (tail == NULL)
// // // //     {
// // // //         Node *newNode = new Node(d);
// // // //         tail = newNode;
// // // //         newNode->next = newNode;
// // // //     }
// // // //     else
// // // //     {
// // // //         // non-empty list
// // // //         // assuming that the element is present in the list

// // // //         Node *curr = tail;

// // // //         while (curr->data != element)
// // // //         {
// // // //             curr = curr->next;
// // // //         }

// // // //         // element found -> curr is representing element wala node
// // // //         Node *temp = new Node(d);
// // // //         temp->next = curr->next;
// // // //         curr->next = temp;
// // // //     }
// // // // }

// // // // void print(Node *tail)
// // // // {

// // // //     Node *temp = tail;

// // // //     // empty list
// // // //     if (tail == NULL)
// // // //     {
// // // //         cout << "List is Empty " << endl;
// // // //         return;
// // // //     }

// // // //     do
// // // //     {
// // // //         cout << tail->data << " ";
// // // //         tail = tail->next;
// // // //     } while (tail != temp);

// // // //     cout << endl;
// // // // }

// // // // void deleteNode(Node *&tail, int value)
// // // // {

// // // //     // empty list
// // // //     if (tail == NULL)
// // // //     {
// // // //         cout << " List is empty, please check again" << endl;
// // // //         return;
// // // //     }
// // // //     else
// // // //     {
// // // //         // non-empty

// // // //         // assuming that "value" is present in the Linked List
// // // //         Node *prev = tail;
// // // //         Node *curr = prev->next;

// // // //         while (curr->data != value)
// // // //         {
// // // //             prev = curr;
// // // //             curr = curr->next;
// // // //         }

// // // //         prev->next = curr->next;

// // // //         // 1 Node Linked List
// // // //         if (curr == prev)
// // // //         {
// // // //             tail = NULL;
// // // //         }

// // // //         //>=2 Node linked list
// // // //         else if (tail == curr)
// // // //         {
// // // //             tail = prev;
// // // //         }

// // // //         curr->next = NULL;
// // // //         delete curr;
// // // //     }
// // // // }

// // // // bool isCircularList(Node *head)
// // // // {
// // // //     // empty list
// // // //     if (head == NULL)
// // // //     {
// // // //         return true;
// // // //     }

// // // //     Node *temp = head->next;
// // // //     while (temp != NULL && temp != head)
// // // //     {
// // // //         temp = temp->next;
// // // //     }

// // // //     if (temp == head)
// // // //     {
// // // //         return true;
// // // //     }

// // // //     return false;
// // // // }

// // // // bool detectLoop(Node *head)
// // // // {

// // // //     if (head == NULL)
// // // //         return false;

// // // //     map<Node *, bool> visited;

// // // //     Node *temp = head;

// // // //     while (temp != NULL)
// // // //     {

// // // //         // cycle is present
// // // //         if (visited[temp] == true)
// // // //         {
// // // //             return true;
// // // //         }

// // // //         visited[temp] = true;
// // // //         temp = temp->next;
// // // //     }
// // // //     return false;
// // // // }

// // // // int main()
// // // // {

// // // //     Node *tail = NULL;

// // // //     // insertNode(tail, 5, 3);
// // // //     // print(tail);

// // // //     //  insertNode(tail, 3, 5);
// // // //     // print(tail);

// // // //     /*
// // // //         insertNode(tail, 5, 7);
// // // //         print(tail);

// // // //         insertNode(tail, 7, 9);
// // // //         print(tail);

// // // //         insertNode(tail, 5, 6);
// // // //         print(tail);

// // // //         insertNode(tail, 9, 10);
// // // //         print(tail);

// // // //         insertNode(tail, 3, 4);
// // // //         print(tail);

// // // //         deleteNode(tail, 5);
// // // //         print(tail);
// // // //          */

// // // //     if (isCircularList(tail))
// // // //     {
// // // //         cout << " Linked List is Circular in nature" << endl;
// // // //     }
// // // //     else
// // // //     {
// // // //         cout << "Linked List is not Circular " << endl;
// // // //     }

// // // //     return 0;
// // // // }

// // // #include <iostream>

// // // using namespace std;

// // // // Node class to represent each element in the linked list
// // // class Node
// // // {
// // // public:
// // //     int data;
// // //     Node *next;

// // //     Node(int data)
// // //     {
// // //         this->data = data;
// // //         this->next = nullptr;
// // //     }
// // // };

// // // // LinkedList class to manage the linked list operations
// // // class LinkedList
// // // {
// // // public:
// // //     Node *head;

// // //     LinkedList()
// // //     {
// // //         head = nullptr;
// // //     }

// // //     // Function to append a new node with given data to the end of the list
// // //     void append(int data)
// // //     {
// // //         Node *new_node = new Node(data);
// // //         if (head == nullptr)
// // //         {
// // //             head = new_node;
// // //             return;
// // //         }
// // //         Node *last_node = head;
// // //         while (last_node->next != nullptr)
// // //         {
// // //             last_node = last_node->next;
// // //         }
// // //         last_node->next = new_node;
// // //     }

// // //     // Function to print the elements of the linked list
// // //     void printList()
// // //     {
// // //         Node *current_node = head;
// // //         while (current_node != nullptr)
// // //         {
// // //             cout << current_node->data << " ";
// // //             current_node = current_node->next;
// // //         }
// // //     }
// // // };

// // // int main()
// // // {
// // //     // Creating a linked list with numbers 1 to 10
// // //     LinkedList llist;
// // //     for (int i = 1; i <= 10; ++i)
// // //     {
// // //         llist.append(i);
// // //     }

// // //     // Printing the linked list
// // //     llist.printList();

// // //     return 0;
// // // }

// // #include <iostream>

// // using namespace std;

// // class Node
// // {
// // public:
// //     int data;
// //     Node *next;

// //     Node(int data)
// //     {
// //         this->data = data;
// //         this->next = nullptr;
// //     }
// // };

// // class LinkedList
// // {
// // public:
// //     Node *head;

// //     LinkedList()
// //     {
// //         head = nullptr;
// //     }

// //     void append(int data)
// //     {
// //         Node *new_node = new Node(data);
// //         if (head == nullptr)
// //         {
// //             head = new_node;
// //             return;
// //         }
// //         Node *last_node = head;
// //         while (last_node->next != nullptr)
// //         {
// //             last_node = last_node->next;
// //         }
// //         last_node->next = new_node;
// //     }

// //     void printList()
// //     {
// //         Node *current_node = head;
// //         while (current_node != nullptr)
// //         {
// //             cout << current_node->data << " ";
// //             current_node = current_node->next;
// //         }
// //     }

// //     Node *helper(Node *head, int k)
// //     {
// //         if (head == NULL)
// //         {
// //             return NULL;
// //         }

// //         Node *temp = head;
// //         int len = 0;
// //         while (temp != NULL && len < k)
// //         {
// //             len++;
// //             temp = temp->next;
// //         }
// //         if (len < k)
// //             return head;

// //         Node *next = NULL;
// //         Node *curr = head;
// //         Node *prev = NULL;
// //         int count = 0;

// //         while (curr != NULL && count < k)
// //         {
// //             next = curr->next;
// //             curr->next = prev;
// //             prev = curr;
// //             curr = next;
// //             count++;
// //         }

// //         if (next != NULL)
// //         {
// //             head->next = helper(next, k);
// //         }

// //         return prev;
// //     }

// //     Node *kReverse(Node *head, int k)
// //     {
// //         Node *ans = helper(head, k);
// //         return ans;
// //     }
// // };

// // int main()
// // {
// //     LinkedList llist;
// //     for (int i = 1; i <= 10; ++i)
// //     {
// //         llist.append(i);
// //     }

// //     cout << "Original linked list: ";
// //     llist.printList();
// //     cout << endl;

// //     int k = 3; // Change k value as needed
// //     Node *reversed_head = llist.kReverse(llist.head, k);

// //     cout << "Linked list after reversing every " << k << " elements: ";
// //     while (reversed_head != nullptr)
// //     {
// //         cout << reversed_head->data << " ";
// //         reversed_head = reversed_head->next;
// //     }
// //     cout << endl;

// //     return 0;
// // }

// #include <iostream>

// // Node structure for the linked list
// struct Node
// {
//     int data;
//     Node *next;
//     Node *child;

//     Node(int val) : data(val), next(nullptr), child(nullptr) {}
// };

// // Function to print the linked list
// void printList(Node *head, int depth)
// {
//     while (head != nullptr)
//     {
//         std::cout << std::string(depth * 2, ' ') << head->data << std::endl;
//         if (head->child)
//             printList(head->child, depth + 1);
//         head = head->next;
//     }
// }

// int main()
// {
//     // Creating the linked list with children
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     head->child = new Node(6);
//     head->child->next = new Node(7);
//     head->child->next->next = new Node(8);

//     head->next->child = new Node(9);
//     head->next->child->next = new Node(10);

//     head->next->next->next->child = new Node(11);
//     head->next->next->next->child->next = new Node(12);

//     // Printing the linked list
//     std::cout << "Linked List with children: ";
//     printList(head , 0 );
//     std::cout << std::endl;

//     // Deleting the linked list to free memory
//     while (head != nullptr)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }
/* 
function flattenLinkedList(head):
    current = head
    while current is not null:
        if current.child is not null:
            tail = current.child
            while tail.next is not null:
                tail = tail.next
            tail.next = current.next
            if current.next is not null:
                current.next.prev = tail
            current.next = current.child
            current.child.prev = current
            current.child = null
        current = current.next
 */