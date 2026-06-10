#include<iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};
// chiều cao của cây
int height(Node* p) {
    if (p == NULL)
        return 0;
    return p->height;
}

// tìm số lớn hơn
int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}

// tao nút mới
Node* createNode(int x) {
    Node* p = new Node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;
    p->height = 1;

    return p;
}
// quay phải
Node* rotateRight(Node* y) {
    Node* x = y->left;
    Node* T = x->right;

    x->right = y;
    y->left = T;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
// quay trái
Node* rotateLeft(Node* x) {
    Node* y = x->right;
    Node* T = y->left;

    y->left = x;
    x->right = T;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}
int main() {


    return 0;
}