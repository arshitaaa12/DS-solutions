#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

bool isBSTUtil(Node* root, Node* minNode, Node* maxNode){
    if(!root){
        return true;
    }
    if((minNode && root->data<=minNode->data) || (maxNode && root->data>=maxNode->data)){
        return false;
    }
    return isBSTUtil(root->left, minNode, root) && isBSTUtil(root->right, root, maxNode);
}

bool isBST(Node* root){
    return isBSTUtil(root, nullptr, nullptr);
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);

    cout<<(isBST(root)?"Yes":"No")<<endl;

    Node* root2 = new Node(20);
    root2->left = new Node(30);
    root2->right = new Node(10);
    cout<<(isBST(root2)?"Yes":"No")<<endl;

    return 0;
}
