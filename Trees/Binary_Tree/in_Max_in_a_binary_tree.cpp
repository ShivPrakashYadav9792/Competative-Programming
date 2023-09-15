#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include <climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    // Write your code here
    pair<int, int> p = make_pair(INT_MAX, INT_MIN);

    if (root == NULL)
    {
        return p;
    }
    pair<int, int> l = getMinAndMax(root->left);
    pair<int, int> r = getMinAndMax(root->right);
    int ans1 = l.first;
    int ans2 = l.second;
    int ans3 = r.first;
    int ans4 = r.second;
    int k = min(min(ans1, ans3), root->data);
    int m = max(max(ans2, ans4), root->data);
    p.first = k;
    p.second = m;
    return p;
}
BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    pair<int, int> ans = getMinAndMax(root);
    cout << ans.first << " " << ans.second;
}