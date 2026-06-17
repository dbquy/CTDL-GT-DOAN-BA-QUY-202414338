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
    

    return 0;
}