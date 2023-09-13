#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
    // Write your code here
    if (root == NULL)
        return root;
    TreeNode<int> *ans = NULL;
    if (root->data > x)
    {
        if (!ans || root->data < ans->data)
        {
            ans = root;
        }
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *temp = getNextLargerElement(root->children[i], x);
        if (temp)
        {
            if (!ans || temp->data < ans->data)
            {
                ans = temp;
            }
        }
    }
    return ans;
}

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    int x;
    cin >> x;
    TreeNode<int> *ans = getNextLargerElement(root, x);

    if (ans != NULL)
    {
        cout << ans->data;
    }
}