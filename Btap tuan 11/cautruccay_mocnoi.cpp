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

    // CAI DAT CAU TRUC CAY VOI BIEU THUC (a*b+c)/d - (e*f-h)^g
   
   
    //Cay day du
    
    Node* a = tao('-');

    a->left = tao('/');
    a->right = tao('^');

    a->left->left = tao('+');
    a->left->right = tao('d');

    a->right->left = tao('-');
    a->right->right = tao('g');

    a->left->left->left = tao('*');
    a->left->left->right = tao('c');

    a->right->left->left = tao('*');
    a->right->left->right = tao('h');

    a->left->left->left->left = tao('a');
    a->left->left->left->right = tao('b');

    a->right->left->left->left = tao('e');
    a->right->left->left->right = tao('f');

    cout << "CAY DAY DU\n";

    cout << "\nduyet truoc: ";
    truoc(a);

    cout << "\nduyet giua: ";
    giua(a);

    cout << "\nduyet sau: ";
    sau(a);

   
    //Cay Lech Trai
  
    Node* b = tao('-');

    b->left = tao('/');

    b->left->left = tao('+');

    b->left->left->left = tao('*');

    b->left->left->left->left = tao('a');
    b->left->left->left->right = tao('b');

    b->left->left->right = tao('c');

    b->left->right = tao('d');

    cout << "\n\nCAY LECH TRAI\n";

    cout << "\nduyet truoc: ";
    truoc(b);

    cout << "\nduyet giua: ";
    giua(b);

    cout << "\nduyet sau: ";
    sau(b);

    
    //Cay Lech Phai
    

    Node* c = tao('-');

    c->right = tao('^');

    c->right->right = tao('-');

    c->right->right->right = tao('*');

    c->right->right->right->left = tao('e');
    c->right->right->right->right = tao('f');

    cout << "\n\nCAY LECH PHAI\n";

    cout << "\nduyet truoc: ";
    truoc(c);

    cout << "\nduyet giua: ";
    giua(c);

    cout << "\nduyet sau: ";
    sau(c);
    

    return 0;
}