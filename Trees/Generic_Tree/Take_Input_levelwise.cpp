#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *takeInputLevelWise()
{ // Function to take level-wise input
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes; // Queue declared of type TreeNode
    pendingNodes.push(root);             // Root data pushed into queue at first
    while (pendingNodes.size() != 0)
    {                                                // Runs until the queue is not empty
        TreeNode<int> *front = pendingNodes.front(); // stores front of queue
        pendingNodes.pop();                          // deleted that front node stored previously
        cout << "Enter num of children of " << front->data << endl;
        int numChild;
        cin >> numChild; // get the number of child nodes
        for (int i = 0; i < numChild; i++)
        { // iterated over each child node to
            // input it
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child); // Each child node is pushed
            // into the queue as well as the list of child nodes as it is taken input so that next
            //  time we can take its children as input while we kept moving in the level-wise
            //  fashion
            pendingNodes.push(child);
        }
    return root; // Finally returns the root node
}
}

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    // TODO delete the tree
}
