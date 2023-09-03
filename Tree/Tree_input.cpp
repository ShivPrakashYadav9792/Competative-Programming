#include <iostream>
#include "TreeNode.h" // TreeNode.h file included as told above
using namespace std;

TreeNode<int> *takeInput() // Function that returns root node after taking input
{
    int rootData; // To store root data
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    // Dynamically created a root node and initialized with constructor
    int n; // To store number of children of the node
    cout << "Enter num of children of " << rootData << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput(); // Input taken recursively for
        // each child node of the current node
        root->children.push_back(child); // Each child node is inserted into
        // the list of children nodes’
    }
    return root;
}

void printTree(TreeNode<int> *root)
{ // Function to print the tree that takes the
    // root node as its argument
    if (root == NULL)
    { // Base case
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    { // Traversing over the vector of
        // its child nodes and printing each of it
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {                                 // Now recursively calling print
        printTree(root->children[i]); // function over each child
    }
}
int main()
{
    TreeNode<int> *root = takeInput();
    printTree(root);
    // TODO : Delete tree
}

