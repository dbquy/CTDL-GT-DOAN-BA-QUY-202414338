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
    themCanh(0,1);   // Ha Noi - Thai Nguyen
    themCanh(0,2);   // Ha Noi - Bac Ninh
    themCanh(0,6);   // Ha Noi - Hai Duong
    themCanh(0,8);   // Ha Noi - Phu Ly
    themCanh(0,9);   // Ha Noi - Hoa Binh
    themCanh(0,10);  // Ha Noi - Son Tay
   
    themCanh(2,3);   // Bac Ninh - Bac Giang
    themCanh(2,4);   // Bac Ninh - Uong Bi
   
    themCanh(3,4);   // Bac Giang - Uong Bi
   
    themCanh(4,5);   // Uong Bi - Hai Phong
   
    themCanh(5,6);   // Hai Phong - Hai Duong
   
    themCanh(6,7);   // Hai Duong - Hung Yen
   
    themCanh(7,8);   // Hung Yen - Phu Ly
    cout << "Thu tu BFS bat dau tu Ha Noi:\n\n";
    duyettheochieurong(0);


    return 0;
}