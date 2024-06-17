#include <iostream>

// Node class definition
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// LinkedList class definition
class LinkedList
{
public:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Method to insert a new node at the end of the list
    void insert(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Method to delete a node with a given value
    void deleteNode(int val)
    {
        if (head == nullptr)
            return;

        if (head->data == val)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr && temp->next->data != val)
        {
            temp = temp->next;
        }

        if (temp->next == nullptr)
            return;

        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    Node *findmiddle(Node *head)
    {
        if (head == nullptr)
            return nullptr;

        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    // Method to display the linked list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Destructor to free memory
    ~LinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void middle()
    {
    }
};

// Main function
int main()
{
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    std::cout << "Linked List: ";
    list.display();

    list.deleteNode(20);
    std::cout << "After deleting 20: ";
    list.display();

    list.deleteNode(10);
    std::cout << "After deleting 10: ";
    list.display();

    Node* middleNode = list.findmiddle(list.head);
    std::cout << "Middle Node: " << middleNode->data << std::endl;

    return 0;
}
