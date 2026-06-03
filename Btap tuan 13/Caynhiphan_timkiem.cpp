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
Node* timKiem(Node *root, int x)
{
    if(root == NULL || root->data == x)
        return root;

    if(x <= root->data)
        return timKiem(root->left, x);
    
    return timKiem(root->right, x);
}

int main() {

    int a[] = {2001, 2002, 2006, 2007, 2003, 2004, 2005, 2001, 1999, 2004};

    int n = sizeof(a) / sizeof(a[0]);

    Node *root = NULL;

    // tao cay
    for(int i = 0; i < n; i++)
    {
        themNode(root, a[i]);
    }
    int nam_sinh = 2004;

    Node *kq = timKiem(root, nam_sinh);

    if(kq != NULL)
        cout << "Tim thay nam sinh " << nam_sinh;
    else
        cout << "Khong tim thay nam sinh " << nam_sinh;

    return 0;
}