#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort(int arr[], int n)
{
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (arr[i] == 0 && i < j)
        {
            i++;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;
            printarray(arr, 10);
        }
        if (arr[j] == 2 && i < j)
        {
            j--;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;
            printarray(arr, 10);
        }
        if (arr[i] == arr[j] && i < j)
        {

            for (int x = i; x < n; x++)
            {
                if (arr[i] > arr[x] && i < j)
                {
                    swap(arr[i], arr[x]);
                    break;
                }
                
            }
            i++;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;
            printarray(arr, 10);
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;

            cout << "i is " << i << endl;
            cout << "j is" << j << endl;

            printarray(arr, 10);
        }
        if (arr[i] == 2 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);

            i++;
            j--;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;
            printarray(arr, 10);
        }

        if (arr[i] == 2 && arr[j] == 1 && i < j)
        {
            swap(arr[i], arr[j]);

            // i++;
            j--;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;
            printarray(arr, 10);
        }
        if (arr[i] == 0 && arr[j] == 1 && i < j)
        {
            i++;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;

            printarray(arr, 10);
        }
        if (arr[i] == 0 && arr[j] == 2 && i < j)
        {

            i++;
            j--;
            cout << "i is " << i << endl;
            cout << "j is" << j << endl;
            printarray(arr, 10);
        }

        // i++;
        // j--;

        // swap(arr[i],arr[j]);
    }




    
//   //sort(arr,arr+n);
//    int c1=0,c2=0,c3=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]==0){
//            c1++;
//        }
//        else if(arr[i]==1){
//            c2++;
//        }
//        else{
//            c3++;
//        }
//    }
//    int i=0;
//    for( ;i<c1;i++){
//       arr[i]=0;
//    }
//    for(;i<c1+c2;i++){
//       arr[i]=1;
//    }
//    for(;i<c1+c2+c3;i++){
//       arr[i]=2;
//    }
}

int main()
{
    int num[100] = {0 ,1 ,2 ,0 ,1 ,2 ,0 ,1 ,2 ,0};
    cout << "before sorting" << endl;
    printarray(num, 10);
    cout << endl;
    sort(num, 10);
    cout << "after sorting" << endl;
    printarray(num, 10);
    return 0;
}