#include<iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int val) : data(val), left(nullptr), right(nullptr){}
};

BSTNode* insertdata(BSTNode* root, int key){
    if(!root){
        return new BSTNode(key);
    }
    if(key<root->data){
        root->left = insertdata(root->left, key);
    } else if(key>root->data){
        root->right = insertdata(root->right, key);
    }
    return root;
}

BSTNode* recursive(BSTNode* root, int key){
    if(!root || root->data == key){
        return root;
    }
    if(key<root->data){
        return recursive(root->left, key);
    } else {
        return recursive(root->right, key);
    }
}

BSTNode* Iterative(BSTNode* root, int key) {
    while(root){
        if(root->data == key){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return nullptr;
}

BSTNode* maxElement(BSTNode* root) {
    if(!root){
        return nullptr;
    }
    while(root->right){
        root = root->right;
    }
    return root;
}

BSTNode* minElement(BSTNode* root) {
    if(!root){
        return nullptr;
    }
    while(root->left){
        root = root->left;
    }
    return root;
}

BSTNode* inorderSuccessor(BSTNode* root, BSTNode* node) {
    if(node->right){
        BSTNode* temp = node->right;
        while(temp->left){
            temp = temp->left;
        }
        return temp;
    }
    BSTNode* succ = nullptr;
    while(root){
        if(node->data < root->data) {
            succ = root;
            root = root->left;
        } else if(node->data > root->data){
            root = root->right;
        }
        else{
            break;
        }
    }
    return succ;
}

BSTNode* inorderPredecessor(BSTNode* root, BSTNode* node) {
    if(node->left){
        BSTNode* temp = node->left;
        while(temp->right){
            temp = temp->right;
        }
        return temp;
    }
    BSTNode* pred = nullptr;
    while(root){
        if(node->data > root->data){
            pred = root;
            root = root->right;
        } else if(node->data < root->data){
            root = root->left;
        }
        else{
            break;
        }
    }
    return pred;
}