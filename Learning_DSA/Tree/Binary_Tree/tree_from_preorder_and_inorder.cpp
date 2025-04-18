#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;

    node(int data) : data(data) {}
};

int searchInOrder(int InOrder[], int start, int end, int curr)
{
    for (int j = start; j <= end; j++)
    {
        if (InOrder[j] == curr)
        {
            return j;
        }
    }
    return -1;
}

node *BuildTree(int InOrder[], int PreOrder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int i = 0;
    int curr = PreOrder[i];
    node *root = new node(curr);
    i++;

    if (start == end)
    {
        return root;
    }

    int pos = searchInOrder(InOrder, start, end, curr);

    root->left = BuildTree(InOrder, PreOrder, start, pos - 1);
    root->right = BuildTree(InOrder, PreOrder, pos + 1, end);

    return root;
}

// Utility function to print the tree in InOrder
void printInOrder(node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main()
{
    int InOrder[] = {4, 2, 5, 1, 6, 3};
    int PreOrder[] = {1, 2, 4, 5, 3, 6};
    int n = sizeof(InOrder) / sizeof(InOrder[0]);

    node *root = BuildTree(InOrder, PreOrder, 0, n - 1);

    cout << "InOrder Traversal of Constructed Tree: ";
    printInOrder(root);
    cout << endl;

    return 0;
}