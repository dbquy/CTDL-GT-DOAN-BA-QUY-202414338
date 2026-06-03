#include <iostream>
using namespace std;

// cau truc nut
struct Node {
    int data;
    Node* left;
    Node* right;
};

// tao nut moi
Node* taoNode(int x) {
    Node* p = new Node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}
// them mot gia tri vao cay
void themNode(Node *&root, int x)
{
    // neu cay rong
    if(root == NULL)
    {
        root = taoNode(x);
        return;
    }
    // nho hon hoac bang thi qua trai
    if(x <= root->data)
        themNode(root->left, x);
    // lon hon thi qua phai
    else
        themNode(root->right, x);
       
}


int main() {

    

    return 0;
}