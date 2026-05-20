#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

// tao node
Node* tao(char x) {

    Node* p = new Node;

    p->data = x;

    p->left = NULL;
    p->right = NULL;

    return p;
}

// duyet truoc
void truoc(Node* t) {

    if (t == NULL) return;

    cout << t->data << " ";

    truoc(t->left);
    truoc(t->right);
}

// duyet giua
void giua(Node* t) {

    if (t == NULL) return;

    giua(t->left);

    cout << t->data << " ";

    giua(t->right);
}

// duyet sau
void sau(Node* t) {

    if (t == NULL) return;

    sau(t->left);
    sau(t->right);

    cout << t->data << " ";
}

int main() {


    return 0;
}