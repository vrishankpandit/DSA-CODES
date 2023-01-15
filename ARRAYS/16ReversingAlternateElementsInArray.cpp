#include <iostream>
using namespace std;
int num(int arr[], int n)
{
    for (int i = 0; i+1 < n; i = i + 2)
    {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
    int printarray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

int main()
{
    int n;
    cout << "enter the size" << endl;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the value at index " << i << endl;
        cin >> a[i];
    }
    num(a, n);
    printarray(a, n);

    return 0;
}