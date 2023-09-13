#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

int numNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + numNodes(root->left) + numNodes(root->right);
}

void printLevelWise(BinaryTreeNode<int> *root)
{
    // Write your code here
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        if (front == NULL)
        {
            cout << "\n";
            if (!pendingNodes.empty())
            {
                pendingNodes.push(NULL);
            }
        }
        else
        {
            cout << front->data << ":";
            cout << "L:";
            if (front->left)
            {
                pendingNodes.push(front->left);
                cout << front->left->data << ",";
            }
            else
            {
                cout << "-1"
                     << ",";
            }
            cout << "R:";
            if (front->right)
            {
                pendingNodes.push(front->right);
                cout << front->right->data << "\n";
            }
            else
            {
                cout << "-1"
                     << "\n";
            }
        }
    }
}

int main()
{
    /*
         BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
         BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
         BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
         root->left = node1;
         root->right = node2;
    */
    BinaryTreeNode<int> *root = takeInputLevelWise();
    cout << "The NUmber of Nodes in Binary tree" << endl;
    cout << numNodes(root) << " ";
    printLevelWise(root);
    delete root;
}
