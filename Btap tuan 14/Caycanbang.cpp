#include<iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};

//tao nút mới
Node* createNode(int x) {
    Node* p = new Node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;
    p->height = 1;
    return p;
}
int main() {


    return 0;
}