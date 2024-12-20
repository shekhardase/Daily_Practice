#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *build(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter Data for Left Node : " << data << endl;
    root->left = build(root->left);
    cout << "Enter Data for Right Node : " << data << endl;
    root->right = build(root->right);
    return root;
}

}
void LevelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void test(node *root)
{
    queue<node *> q;
    q.push(root);
    // q.push(NULL)
    cout << q.front() << endl;
    node *temp = q.front();
    cout << temp->data << endl;
    q.pop();
    cout << q.front() << endl;


int main()
{
    node *root = NULL;
    root = build(root);
    cout << "Level Order Traversing" << endl;
    LevelOrderTraversal(root);
    cout << endl;
    cout << endl;
    cout << endl;
    test(root);
    return 0;
}