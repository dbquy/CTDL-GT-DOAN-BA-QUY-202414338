#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX = 11;
const int VC = 1000000;

string TenTinh[MAX] = {
    "HN","TN","BN","BG","UB","HP","HD","HY","PL","HB","ST"
};

struct DoThi {
    int n;
    int a[MAX][MAX];
};

struct Canh {
    int dau, cuoi, ts;
};

void TaoDoThi(DoThi &g, int n) {
    g.n = n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            g.a[i][j]=0;
}
void ThemCanh(DoThi &g,int u,int v,int w){
    g.a[u][v]=w;
    g.a[v][u]=w;
}
