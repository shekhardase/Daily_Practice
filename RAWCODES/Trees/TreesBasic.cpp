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

void inorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

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

void buildFromLevelOrder(node *root)
{
    queue<node *> q;
    cout << "Enter the data for root node " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter left node : " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node : " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
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
    cout << endl;
    cout << "Inorder Traversal" << endl;
    inorderTraversal(root);
    cout << endl;
    cout << "Preorder Traversal" << endl;
    preOrderTraversal(root);
    cout << endl;
    cout << "Postorder Traversal" << endl;
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
