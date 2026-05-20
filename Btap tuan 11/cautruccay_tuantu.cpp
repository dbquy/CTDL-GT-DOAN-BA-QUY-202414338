#include <iostream>
using namespace std;

// duyet truoc
void truoc(char a[], int i) {

    if (a[i] == 0) return;

    cout << a[i] << " ";

    truoc(a, i * 2);
    truoc(a, i * 2 + 1);
}

// duyet giua
void giua(char a[], int i) {

    if (a[i] == 0) return;

    giua(a, i * 2);

    cout << a[i] << " ";

    giua(a, i * 2 + 1);
}

// duyet sau
void sau(char a[], int i) {

    if (a[i] == 0) return;

    sau(a, i * 2);

    sau(a, i * 2 + 1);

    cout << a[i] << " ";
}