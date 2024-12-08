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

node *BuildTree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left : " << data << endl;

    root->left = BuildTree(root->left);
    cout << "Enter data for inserting in Right : " << data << endl;

    root->right = BuildTree(root->right);

    return root;
}

void LevelOrderTraversal(node *root) // also called as Breadth-First Search (BFS) traversal
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
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty()) // q still has some child nodes
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << " " <<temp->data << " ";
            if (temp->l1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1eft)
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

int main()
{
    node *root = NULL;
    root = BuildTree(root);
    cout << "Printing the level order traversal output " << endl;
    LevelOrderTraversal(root);
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1