#include <iostream>
using namespace std;

int ar[20], B[20];
int n;

void input()
{
    while(true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\n Maksimal panjang array adalah 20";
        }
    }
}