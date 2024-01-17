#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *nxt;

    // constructor call
    NODE(int data)
    {
        this->data = data;
        this->nxt = NULL;
    }
};

void print(NODE *head)
{
    NODE *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nxt;
    }
    cout << endl;
}

int main()
{
    NODE *N1 = new NODE(1);
    NODE *N2 = new NODE(2);
    NODE *N3 = new NODE(3);
    NODE *N4 = new NODE(4);
    NODE *N5 = new NODE(5);
    NODE *N6 = new NODE(6);

    // Set head to one of the nodes
    NODE *head = N1;

    N1->nxt = N2;
    N2->nxt = N3;
    N3->nxt = N4;
    N4->nxt = N5;
    N5->nxt = N6;
    // Set the last node's next to NULL
    N6->nxt = NULL;

    print(head);

    return 0;
}
