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
     int xp=9;      // Hoa Binh
    int dich=4;    // Uong Bi

    d[xp]=0;

    while(true){

        int u=-1;
        int Min=VC;

        for(int i=0;i<g.n;i++){
            if(!chon[i] && d[i]<Min){
                Min=d[i];
                u=i;
            }
        }

        if(u==-1) break;

        chon[u]=true;

        if(u==dich) break;

        for(int v=0;v<g.n;v++){
            if(g.a[u][v]>0 && !chon[v]){
                if(d[v] > d[u]+g.a[u][v]){
                    d[v]=d[u]+g.a[u][v];
                    truoc[v]=u;
                }
            }
        }

        cout<<"\nChon dinh "<<TenTinh[u]<<endl;

        cout<<"Khoang cach: ";
        for(int i=0;i<g.n;i++){
            if(d[i]==VC) cout<<"INF ";
            else cout<<d[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nDuong di ngan nhat:\n";

    int stack[MAX];
    int top=0;

    int x=dich;

    while(x!=-1){
        stack[top++]=x;
        x=truoc[x];
    }

    for(int i=top-1;i>=0;i--){
        cout<<TenTinh[stack[i]];
        if(i) cout<<" -> ";
    }

    cout<<"\nTong trong so = "<<d[dich]<<endl;
}
void Prim(DoThi g){

    bool daCo[MAX]={false};
    int Cay[MAX][MAX];

    for(int i=0;i<g.n;i++)
        for(int j=0;j<g.n;j++)
            Cay[i][j]=0;
