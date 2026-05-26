#include <iostream>
using namespace std;

//ham in mang
void inMang(int a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

//ham vun dong
void vundong(int a[], int n, int i)
{
    int max = i;

    int left = 2 * i;
    int right = 2 * i + 1;

    //tim node lon nhat
    if(left <= n && a[left] > a[max])
    {
        max = left;
    }

    if(right <= n && a[right] > a[max])
    {
        max = right;
    }

    //neu can doi cho
    if(max != i)
    {
        int temp = a[i];
        a[i] = a[max];
        a[max] = temp;

        //in trang thai luu tru sau moi lan doi
        cout << "Trang thai sau khi doi: ";
        inMang(a, n);

        // vun tiep nhanh con
        vundong(a, n, max);
    }
}
//heap sort
void heapSort(int a[], int n)
{
    cout << "\nCac buoc tao max heap\n";

    // tao max heap
    for(int i = n / 2; i >= 1; i--)
    {
        cout << "\nVun dong tai node " << i << endl;

        vundong(a, n, i);

        cout << "Trang thai hien tai: ";
        inMang(a, n);
    }

    cout << "\nMax Heap thu duoc:\n";
    inMang(a, n);

    cout << "\nCac buoc sap xep\n";

    // sap xep
    for(int i = n; i >= 2; i--)
    {
        // doi root voi phan tu cuoi
        int temp = a[1];
        a[1] = a[i];
        a[i] = temp;

        cout << "\nDoi root voi phan tu cuoi:\n";
        inMang(a, n);

        // vun lai heap
        vundong(a, i - 1, 1);

        cout << "Trang thai sau khi vun lai:\n";
        inMang(a, n);
    }
}


int main()
{
    
    return 0;
}