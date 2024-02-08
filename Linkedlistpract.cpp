// #include <iostream>
// using namespace std;

// class NODE
// {
// public:
//     int data;
//     NODE *nxt;

//     // constructor call
//     NODE(int data)
//     {
//         this->data = data;
//         this->nxt = NULL;
//     }
// };

// void print(NODE *head)
// {
//     NODE *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->nxt;
//     }
//     cout << endl;
// }

// int main()
// {
//     NODE *N1 = new NODE(1);
//     NODE *N2 = new NODE(2);
//     NODE *N3 = new NODE(3);
//     NODE *N4 = new NODE(4);
//     NODE *N5 = new NODE(5);
//     NODE *N6 = new NODE(6);

//     // Set head to one of the nodes
//     NODE *head = N1;

//     N1->nxt = N2;
//     N2->nxt = N3;
//     N3->nxt = N4;
//     N4->nxt = N5;
//     N5->nxt = N6;
//     // Set the last node's next to NULL
//     N6->nxt = NULL;

//     print(head);

//     return 0;

// }

// Find middle of linked list

// circular or not

#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

bool detectLoop(Node *head)
{

    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {

        // cycle is present
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{

    Node *tail = NULL;

    // insertNode(tail, 5, 3);
    // print(tail);

    //  insertNode(tail, 3, 5);
    // print(tail);

    /*
        insertNode(tail, 5, 7);
        print(tail);

        insertNode(tail, 7, 9);
        print(tail);

        insertNode(tail, 5, 6);
        print(tail);

        insertNode(tail, 9, 10);
        print(tail);

        insertNode(tail, 3, 4);
        print(tail);


        deleteNode(tail, 5);
        print(tail);
         */

    if (isCircularList(tail))
    {
        cout << " Linked List is Circular in nature" << endl;
    }
    else
    {
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}
