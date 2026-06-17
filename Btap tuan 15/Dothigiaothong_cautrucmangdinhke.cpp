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
// Duyệt theo chiều rộng
void duyettheochieurong(int start)
{
    bool daXet[11] = {false};

    queue<int> q;

    daXet[start] = true;
    q.push(start);

    int stt = 1;
    while(p != NULL)
        {
            int v = p->data;

            if(daXet[v] == false)
            {
                daXet[v] = true;
                q.push(v);
            }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << stt++ << ". " << ten[u] << endl;

        for (int v = 0; v < 11; v++)
        {
            if (a[u][v] == 1 && daXet[v] == false)
            {
                daXet[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    
    return 0;
}