// creation of binary tree
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
        this->right = nullptr;
        this->left = nullptr;
    }
};

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

void ReverseLevelOrder(node *root)
{
    queue<node *> q;
    stack<node *> st;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        st.push(temp);

        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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

    while (!st.empty())
    {
        if (st.top() == NULL)
        {
            cout << endl;
            st.pop();
        }
        else
        {
            cout << st.top()->data << " ";
            st.pop();
        }
    }

    // st.push(root);
    // st.push(NULL);

    // while (!st.empty())
    // {
    //     node *temp = st.top();
    //     st.pop();
    //     if (temp == NULL)
    //     {
    //         cout << endl;
    //         if (!st.empty())
    //         {
    //             st.push(NULL);
    //         }
    //     }
    //     else
    //     {
    //         cout<<temp->data<<" ";
    //         if (temp->left)
    //         {
    //             st.push(temp->left);
    //         }
    //         if (temp->right)
    //         {
    //             st.push(temp->right);
    //         }
    //     }
    // }
}

// void reverseLevelOrder(node* root)
// {
//     stack<node*>st;
//     st.push(root);
//     while(!st.empty())
//     {
//         if(root->left)
//         {
//             st.push(root->left);
//         }
//         if(root->right)
//         {
//             st.push(root->right);
//         }
//     }
// }

node *buildTree(node *root)
{

    cout << "Enter the data for node " << endl;
    int data;
    cin >> data;
    root = new node(data);

    // -1 equal to null

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right " << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node *root = NULL;

    // creating tree
    root = buildTree(root);

    // level order traversal
    cout << "Printing the level order traversal output " << endl;
    LevelOrderTraversal(root);

    cout << "Printing the Reverse level order traversal " << endl;
    ReverseLevelOrder(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    return 0;
}
