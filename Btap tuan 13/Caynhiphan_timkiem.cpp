#include <iostream>
using namespace std;

// cau truc nut
struct Node {
    int data;
    Node* left;
    Node* right;
};

// tao nut moi
Node* taoNut(int x) {
    Node* p = new Node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}


int main() {

    

    return 0;
}