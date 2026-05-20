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

    // Cay day du

    char a[20] = {};

    a[1] = 'A';
    a[2] = 'B';
    a[3] = 'C';
    a[4] = 'D';
    a[5] = 'E';
    a[6] = 'F';
    a[7] = 'G';

    cout << "CAY DAY DU\n";

    for (int i = 1; i <= 7; i++) {
        cout << i << " : " << a[i] << endl;
    }
    
    // Cay lech trai

    char b[20] = {};

    b[1] = 'A';
    b[2] = 'B';
    b[4] = 'C';
    b[8] = 'D';

    cout << "\nCAY LECH TRAI\n";

    cout << "1 : " << b[1] << endl;
    cout << "2 : " << b[2] << endl;
    cout << "4 : " << b[4] << endl;
    cout << "8 : " << b[8] << endl;

    
    //Cay lech phai

    char c[20] = {};

    c[1] = 'A';
    c[3] = 'B';
    c[7] = 'C';
    c[15] = 'D';

    cout << "\nCAY LECH PHAI\n";

    cout << "1 : " << c[1] << endl;
    cout << "3 : " << c[3] << endl;
    cout << "7 : " << c[7] << endl;
    cout << "15 : " << c[15] << endl;
    

       return 0;
}