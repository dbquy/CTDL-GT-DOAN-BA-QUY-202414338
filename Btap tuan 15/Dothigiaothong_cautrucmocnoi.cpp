#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *ds[11];

string ten[11] =
{
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
Node* taoNode(int x)
{
    Node *p = new Node;

    p->data = x;
    p->next = NULL;

    return p;
}
void themCuoi(Node *&head, int x)
{
    Node *p = taoNode(x);

    if(head == NULL)
    {
        head = p;
        return;
    }

    Node *q = head;

    while(q->next != NULL)
    {
        q = q->next;
    }

    q->next = p;
}
void themCanh(int u, int v)
{
    themCuoi(ds[u], v);
    themCuoi(ds[v], u);
}
void duyettheochieurong(int start)
{
    bool daXet[11] = {false};

    queue<int> q;

    daXet[start] = true;
    q.push(start);

    int stt = 1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << stt++ << ". " << ten[u] << endl;

        Node *p = ds[u];

        while(p != NULL)
        {
            int v = p->data;

            if(daXet[v] == false)
            {
                daXet[v] = true;
                q.push(v);
            }

            p = p->next;
        }
    }
}

int main()
{
      for(int i = 0; i < 11; i++)
        ds[i] = NULL;

    // Ha Noi
    themCanh(0,1);
    themCanh(0,2);
    themCanh(0,6);
    themCanh(0,8);
    themCanh(0,9);
    themCanh(0,10);

    // Bac Ninh
    themCanh(2,3);
    themCanh(2,4);

    // Bac Giang
    themCanh(3,4);

    // Uong Bi
    themCanh(4,5);

    // Hai Phong
    themCanh(5,6);

    // Hai Duong
    themCanh(6,7);

    // Hung Yen
    themCanh(7,8);
     cout << "Thu tu duyet theo chieu rong bat dau tu Ha Noi:\n\n";

    duyettheochieurong(0);

    return 0;
}