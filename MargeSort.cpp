#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// create function MargeSort
void MargeSort(int low, int high)
{

    if (low >= high) // step 1
    {
        return; // step 1A
    }

    int mid = (low + high) / 2; // step 2

    //step 3
    // fungsi rekursi - memanggil diri sendiri 
    MargeSort(low, mid);    //step 3A
    MargeSort(mid + 1, high); // step 3B

    //step 4
    int i = low;    //step 4A
    int j = mid + 1; // step 4B
    int k = low;    // step 4C

    while (i <= mid && j <= high) // step 4D
    {
        if (arr [i] <= arr[j]) // step 4D.I
        {
            B[K] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++; // step 4D.II
    }

    while (j <= high) // step 4E
    {
        B[K] = arr[j];  // step 4E.I
        j++;            // step 4E.II
        k = k + 1;      // step 4E.III
    }

    while (i <= mid)    // step 4F
    {
        B[k] = arr[i];  // step 4F.I
        i++;            // step 4F.II
        k++;            // step 4F.III
    }

    // step 5
    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}