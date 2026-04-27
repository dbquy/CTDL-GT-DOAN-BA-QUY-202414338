#include <iostream>
#include <cstring>
using namespace std;

struct Ngay {
    int d, m, y;
};

struct SinhVien {
    char mssv[10];
    char ten[50];
    int gioitinh;
    Ngay ngaysinh;
    char diachi[100];
    char lop[12];
    char khoa[7];
};

struct Node {
    SinhVien sv;
    Node* next;
};

struct List {
    Node* dau;
    Node* cuoi;
};

//khoi tao list
void taoList(List &l) {
    l.dau = l.cuoi = NULL;
}

//tao Node
Node* taoNode(SinhVien x) {
    Node* p = new Node;
    p->sv = x;
    p->next = NULL;
    return p;
}

// so sanh msvv
int soSanh(char a[], char b[]) {
    return strcmp(a, b); // ham trong thu vien cstring
}

//them sinh vien theo thu tu tang dan mssv
void themSV(List &l, SinhVien x) {
    Node* p = taoNode(x);

    if (l.dau == NULL) {
        l.dau = l.cuoi = p;
        return;
    }

    // chèn đầu
    if (soSanh(x.mssv, l.dau->sv.mssv) < 0) {
        p->next = l.dau;
        l.dau = p;
        return;
    }

    Node* truoc = NULL;
Node* sau = l.dau;

while (sau != NULL && soSanh(x.mssv, sau->sv.mssv) > 0) {
    truoc = sau;
    sau = sau->next;
}

if (truoc == NULL) {
    p->next = l.dau;
    l.dau = p;
} else {
    p->next = sau;
    truoc->next = p;
}

if (sau == NULL) l.cuoi = p;
}

//nhap
void nhapSV(SinhVien &x) {
    cout << "mssv: ";
    cin >> x.mssv;
    cin.ignore();

    cout << "Ten: ";
    cin.getline(x.ten, 50);


    cout << "GT (1 nam, 0 nu): ";
    cin >> x.gioitinh;

    cout << "Ngay sinh (d m y): ";
    cin >> x.ngaysinh.d >> x.ngaysinh.m >> x.ngaysinh.y;
    cin.ignore(); 

    cout << "Dia chi: ";
    cin.getline(x.diachi, 100);

    cout << "Lop: ";
    cin.getline(x.lop, 12);

    cout << "Khoa: ";
    cin.getline(x.khoa, 7);
}

// in sinh viên
void inSV(SinhVien x) {
    cout << x.mssv << " - " << x.ten << " - "
         << x.ngaysinh.d << "/" << x.ngaysinh.m << "/"<< x.ngaysinh.y << endl << " - "
         << x.gioitinh << " - " << x.lop << " - " << x.khoa << " - " << x.diachi << endl;
}

void inDS(List l) {
    Node* p = l.dau;
    while (p != NULL) {
        inSV(p->sv);
        p = p->next;
    }
}

// so sanh ngay sinh
int trungNgay(Ngay a, Ngay b) {
    return (a.d == b.d);
}

// tim sv cung ngay sinh
void timSV(List l, Ngay x) {
    Node* p = l.dau;
    int ok = 0;

    while (p != NULL) {
        if (trungNgay(p->sv.ngaysinh, x)) {
            inSV(p->sv);
            ok = 1;
        }
        p = p->next;
    }

    if (!ok) cout << "khong tim thay sinh vien cung ngay sinh\n";
}

// xoa cac sinh vien trung ngay sinh ra khoi list
void xoaSV(List &l, Ngay x) {
    Node* p = l.dau;
    Node* truoc = NULL;

    while (p != NULL) {
        if (trungNgay(p->sv.ngaysinh, x)) {
            Node* r = p;

            if (p == l.dau) {
                l.dau = p->next;
                p = l.dau;
            } else {
                truoc->next = p->next;
                p = truoc->next;
            }

            delete r;
        } else {
            truoc = p;
            p = p->next;
        }
    }
}


int main() {
    List l;
    taoList(l);

    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        SinhVien x;
        cout << "\nSV " << i+1 << endl;
        nhapSV(x);
        themSV(l, x);
    }

    cout << "\nDS:\n";
    inDS(l);

    // thêm
    SinhVien x;
    cout << "\nThem SV:\n";
    nhapSV(x);
    themSV(l, x);

    cout << "\nSau them:\n";
    inDS(l);

    // tim SV trung ngay
    Ngay t;
    cout << "\nNhap ngay can tim: ";
    cin >> t.d;

    timSV(l, t);

    // xoa sinh vien trung ngay sinh
    xoaSV(l, t);

    cout << "\nSau xoa:\n";
    inDS(l);

    return 0;
}