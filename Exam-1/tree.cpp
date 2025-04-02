#include <iostream>
using namespace std;

class Tree {
public:
    int* root;
    Tree* left;
    Tree* right;

    Tree(int data) {
        root = new int(data); 
        left = nullptr;         
        right = nullptr;        
    }
};

Tree* newTree() {
    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data == -1) {
        return nullptr;  
    }

    Tree* newNode = new Tree(data);  

    cout << "Enter left child of " << data << endl;
    newNode->left = newTree(); 

    cout << "Enter right child of " << data << endl;
    newNode->right = newTree(); 

    return newNode;  
}

void preorder(Tree* node) {
    if (node == nullptr) {
        return; 
    }

    cout << (node->root) << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(Tree* node) {
    if (node == nullptr) {
        return;
    }

    inorder(node->left);
    cout << (node->root) << " "; 
    inorder(node->right);
}

void postorder(Tree* node) {
    if (node == nullptr) {
        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout << (node->root) << " ";  
}

int main() {
    Tree* root = newTree();
    cout << "Tree created." << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
