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

void LevelOrderTraversal(node *root) // Breadth first search
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

// void reverseLevelTraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(nullptr);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }

//         else
//         {
//             cout << temp->data << " ";
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//         }
//     }

// }

// void Depth_For_Search(node *root)
// {
//     deque<node *> q;
//     q.push_front(root);
//     q.push_front(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop_back();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push_back(NULL);
//             }
//         }

//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push_back(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push_back(temp->right);
//             }
//         }
//     }
// }

// Depth First Search

void InOrder(node *root)
{
    node *temp = root;
    if (temp == NULL)
    {
        cout << endl;
        return;
    }

    InOrder(temp->left);
    cout << temp->data << " ";
    InOrder(temp->right);
}

void PreOrder(node *root)
{
    node *temp = root;

    if (temp == NULL)
    {
        cout << endl;
        return;
    }

    cout << temp->data << " ";

    PreOrder(temp->left);
    PreOrder(temp->right);
}
void PostOrder(node *root)
{
    node *temp = root;

    if (temp == NULL)
    {
        cout << endl;
        return;
    }

    PreOrder(temp->left);
    PreOrder(temp->right);
    cout << temp->data << " ";
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;

    return ans;
}

int main()
{
    node *root = NULL;
    root = build(root);
    cout << "Level Order Traversing" << endl;
    LevelOrderTraversal(root);
    cout << endl;
    cout << endl;
    cout << endl;
    // // test(root);

    // cout << "Reverse Order Traversing " << endl;
    // reverseLevelTraversal(root);
    // Depth_For_Search(root);

    cout << "PreOrder Traversal " << endl;
    PreOrder(root);
    cout << endl;
    cout << "PostOrder Traversal " << endl;
    PostOrder(root);
    cout << endl;
    cout << "InOrder Traversal " << endl;
    InOrder(root);
    cout << endl;

    cout << "height of Tree or Depth of Tree is " << endl;
    cout << height(root) << endl;
    return 0;
}