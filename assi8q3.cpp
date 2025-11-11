#include <iostream>
using namespace std;

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
    
    BSTNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

BSTNode* insert(BSTNode* root, int key){
    if(!root){
        return new BSTNode(key);
    }
    if(key<root->data){
        root->left = insert(root->left, key);
    }
    else if(key>root->data){
        root->right = insert(root->right, key);
    }
    return root;
}

BSTNode* deleteNode(BSTNode* root, int key){
    if(!root){
        return nullptr;
    }
    if(key<root->data){
        root->left = deleteNode(root->left, key);
    }
    else if(key>root->data){
        root->right = deleteNode(root->right, key);
    }
    else {
        if(!root->left){
            BSTNode* temp = root->right; 
            delete root; 
            return temp; 
        }
        else if(!root->right){ 
            BSTNode* temp = root->left; 
            delete root; 
            return temp; 
        }
        BSTNode* temp = root->right;
        while(temp->left){
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int maxDepth(BSTNode* root){
    if(!root){
        return 0;
    }
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int minDepth(BSTNode* root){
    if(!root){
        return 0;
    }
    if(!root->left){
        return 1 + minDepth(root->right);
    }
    if(!root->right){
        return 1 + minDepth(root->left);
    }
    return 1 + min(minDepth(root->left), minDepth(root->right));
}

void inorder(BSTNode* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    BSTNode* root = nullptr;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);

    cout<<"In-order BST: ";
    inorder(root);
    cout<<endl;

    cout<<"Max Depth: "<<maxDepth(root)<<endl;
    cout<<"Min Depth: "<<minDepth(root)<<endl;

    root = deleteNode(root, 10);
    cout<<"In-order after deleting 10: ";
    inorder(root); 
    cout<<endl;

    return 0;
}
