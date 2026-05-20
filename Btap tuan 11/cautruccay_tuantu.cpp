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
int main() {
    // CAI DAT CAU TRUC CAY VOI BIEU THUC (a*b+c)/d - (e*f-h)^g
    // Cay day du

    char a[50] = {};

    a[1] = '-';

    a[2] = '/';
    a[3] = '^';

    a[4] = '+';
    a[5] = 'd';

    a[6] = '-';
    a[7] = 'g';

    a[8] = '*';
    a[9] = 'c';

    a[12] = '*';
    a[13] = 'h';

    a[16] = 'a';
    a[17] = 'b';

    a[24] = 'e';
    a[25] = 'f';

    cout << "CAY DAY DU\n";

    cout << "\nduyet truoc: ";
    truoc(a, 1);

    cout << "\nduyet giua: ";
    giua(a, 1);

    cout << "\nduyet sau: ";
    sau(a, 1);
    
    // Cay lech trai

    char b[50] = {};

    b[1] = '-';
    b[2] = '/';
    b[4] = '+';
    b[8] = '*';
    b[16] = 'a';
    b[17] = 'b';
    b[9] = 'c';
    b[5] = 'd';

    cout << "\n\nCAY LECH TRAI\n";

    cout << "\nduyet truoc: ";
    truoc(b, 1);

    cout << "\nduyet giua: ";
    giua(b, 1);

    cout << "\nduyet sau: ";
    sau(b, 1);

    
    //Cay lech phai

     char c[50] = {};

    c[1] = '-';
    c[3] = '^';
    c[7] = '-';
    c[15] = '*';

    c[30] = 'e';
    c[31] = 'f';

    cout << "\n\nCAY LECH PHAI\n";

    cout << "\nduyet truoc: ";
    truoc(c, 1);

    cout << "\nduyet giua: ";
    giua(c, 1);

    cout << "\nduyet sau: ";
    sau(c, 1);
    
    //Cay zigzac

    char d[50] = {};

    d[1] = '-';
    d[3] = '/';
    d[6] = '+';
    d[13] = '*';

    d[26] = 'a';
    d[27] = 'b';

    cout << "\n\nCAY ZIGZAG\n";

    cout << "\nduyet truoc: ";
    truoc(d, 1);

    cout << "\nduyet giua: ";
    giua(d, 1);

    cout << "\nduyet sau: ";
    sau(d, 1);

   //Cay bieu thuc
    // (a*b+c)/d - (e*f-h)^g


    char e[50] = {};

    // goc
    e[1] = '-';

    // nhanh trai
    e[2] = '/';
    e[4] = '+';
    e[8] = '*';

    e[16] = 'a';
    e[17] = 'b';

    e[9] = 'c';

    e[5] = 'd';

    // nhanh phai
    e[3] = '^';

    e[6] = '-';
    e[12] = '*';

    e[24] = 'e';
    e[25] = 'f';

    e[13] = 'h';

    e[7] = 'g';

    cout << "\nCAY BIEU THUC\n";

    cout << "\nduyet truoc: ";
    truoc(e, 1);

    cout << "\nduyet giua: ";
    giua(e, 1);

    cout << "\nduyet sau: ";
    sau(e, 1);

       return 0;
}