#include <iostream>
#include <queue>
using namespace std;

string ten[11] = {
    "Ha Noi",
    "Thai Nguyen",
    "Bac Ninh",
    "Bac Giang",
    "Uong Bi",
    "Hai Phong",
    "Hai Duong",
    "Hung Yen",
    "Phu Ly",
    "Hoa Binh",
    "Son Tay"
};

int a[11][11] = {0};

// them canh
void themCanh(int u, int v)
{
    a[u][v] = 1;
    a[v][u] = 1;
}
void themCanh(int u, int v)
{
    a[u][v] = 1;
    a[v][u] = 1;
}

int main()
{
    
    return 0;
}