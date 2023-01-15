// #include <iostream>
// using namespace std;

// void input(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << "enter the value at index " << i << endl;
//         cin >> a[i];
//     }
// }

// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int unique(int *arr, int n)
// {
//         int i;
//         int j;
//         for (int i = 0; i < n; i++){
//             for (int j = 0; i < n; j++)
//             {
//                 if (i!=j &&arr[i] == arr[j])
//                 {
//                     break;
//                 }
                
//             }

//         }
//         if (j==n){
//          cout<<arr[i]	<<endl;

//         }
//     }


// int main()
// {

//     int n=5;
//     int num[100]={2,4,4,3,2};

//     // input(num, n);
//     // printarray(num,n);
//     cout << "unique key is " << unique(num, n) << endl;

//     return 0;
// }


#include<iostream>
using namespace std;


void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value at index " << i << endl;
        cin >> a[i];
    }
}
int ans=0;
int unique(int arr[],int n){
for (int i = 0; i < n; i++)
{
    ans=ans^arr[i];
}
return ans;

}

int main(){
    int n;
    cin>>n;

    int num[100];
    input(num,n);

    cout<<"unique is "<<unique(num,n)	<<endl;

    return 0;
