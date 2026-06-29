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
void InMaTran(int a[MAX][MAX],int n){
    cout<<setw(5)<<" ";
    for(int i=0;i<n;i++)
        cout<<setw(5)<<TenTinh[i];
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<setw(5)<<TenTinh[i];
        for(int j=0;j<n;j++)
            cout<<setw(5)<<a[i][j];
        cout<<endl;
    }
}
void Dijkstra(DoThi g){
    int d[MAX];
    int truoc[MAX];
    bool chon[MAX];

    for(int i=0;i<g.n;i++){
        d[i]=VC;
        truoc[i]=-1;
        chon[i]=false;
    }