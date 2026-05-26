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



int main()
{
    
    return 0;
}