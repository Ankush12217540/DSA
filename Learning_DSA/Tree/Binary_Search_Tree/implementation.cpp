#include<iostream>
using namespace std;
#include<queue>

class Node{
    public:
    int data;
    Node* left, *right;

    Node(int value){
        data=value;
        left=right=NULL;
    }

};

Node * insert(Node *root, int target){
    // base case
    if(!root){
        Node *temp = new Node(target);
        return temp;
    }
    if(target < root->data)   // left side
    {
        root->left=insert(root->left,target);
    }else{
        root->right=insert(root->right, target);
    }
    return root;
}

// inorder traversal to check if binary tree in sorted
void inorder(Node *root){
    if(!root){
        return;
    }
    // left // data // right
    inorder(root->left);
    cout<<root->data; cout<<" ";
    inorder(root->right);
    
}

// Level order traversal to check if binary tree in formed correctly
// Level Order Traversal
void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level

        for (int i = 0; i < levelSize; i++) {
            Node* current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left != NULL) q.push(current->left);
            if (current->right != NULL) q.push(current->right);
        }

        cout << endl; // Move to next line after printing one level
    }
}

int main(){
    int arr[]={6,3,17,5,11,18,2,1,20,14};
    Node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }

    // Traversal (inorder)
    inorder(root);cout<<endl;
    levelOrderTraversal(root);

}