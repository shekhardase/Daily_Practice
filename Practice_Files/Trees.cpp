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

int main()
{
    node *root = NULL;
    build(root);
    return 0;
}