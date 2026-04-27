#include <iostream>
#include <chrono> // thu vien do thoi gian
using namespace std;
using namespace chrono; 

struct Node {
    int x;
    Node* next;
};

// tao vong
Node* tao(int n) {
    Node *dau = NULL, *cuoi = NULL;

    for (int i = 1; i <= n; i++) {
        Node* p = new Node;
        p->x = i;
        p->next = NULL;

        if (dau == NULL) dau = cuoi = p;
        else {
            cuoi->next = p;
            cuoi = p;
        }
    }

    cuoi->next = dau;
    return dau;
}

// in danh sach hien tai
void inDS(Node* p) {
    if (p == NULL) return;

    Node* tmp = p;
    do {
        cout << tmp->x << " ";
        tmp = tmp->next;
    } while (tmp != p);

    cout << endl;
}

// giai bai toan
int giai(int n, int m) {
    if (m == 1) {
        cout << "loai: ";
        for (int i = 1; i < n; i++) cout << i << " ";
        cout << endl;
        return n;
    }

    Node* p = tao(n);
    Node* truoc = NULL;

    cout << "Ban dau: ";
    inDS(p);

    while (p->next != p) {
        int dem = 1;

        while (dem < m) {
            truoc = p;
            p = p->next;
            dem++;
        }

        cout << "loai: " << p->x << endl;

        truoc->next = p->next;
        Node* r = p;
        p = p->next;
        delete r;

        cout << "con lai: ";
        inDS(p);
    }

    return p->x;
}

int main() {
    int n, m;
    cout << "nhap N M: ";
    cin >> n >> m;

    // bat dau do
    auto start = high_resolution_clock::now();

    int kq = giai(n, m);

    // ket thuc
    auto end = high_resolution_clock::now();

    cout << "thang: " << kq << endl;

    // in thoi gian
    cout << "time: "
         << duration_cast<milliseconds>(end - start).count()
         << " ms";

    return 0;
}