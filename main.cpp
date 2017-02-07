#include <iostream>
#include <stdio.h>
using namespace std;
typedef char elem;
struct Node{
    elem data;
    Node * left= nullptr;
    Node * right= nullptr;
};
typedef Node* Tree;
void initTree(Tree &tree){
    elem e;
    scanf("%c",&e);
    if(e=='#'){
        tree= nullptr;
    } else{
        tree = new Node;
        tree->data = e;
        initTree(tree->left);
        initTree(tree->right);
    }
}
void preOrderTraverse(Tree tree){
    if(tree){
        cout<<tree->data;
        preOrderTraverse(tree->left);
        preOrderTraverse(tree->right);
    }
}
int main() {
    Tree tree;
    initTree(tree);
    preOrderTraverse(tree);

}