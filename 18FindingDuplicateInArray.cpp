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

// int unique(int arr[], int n)
// {
     
//         for (int i = 0; i < n; i++){
//             for (int j = 0; i < n; j++)
//             {
//                 if (i!=j && arr[i] == arr[j])
//                 {
//                     cout<<arr[i]	<<endl;
//                 }
                
//             }

//         }
        
//     }

   
//     int main(){
//         int n;
//         cin>>n;
//         int num[100];
//         input(num,n); 
//         unique(num,n); 
        
//         return 0;
//     }



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

void duplicate(int arr[],int n){
    int ans=0;

    for (int i = 0; i <n; i++)
    {
       ans=ans^arr[i];

    }
    for (int i = 0; i <n; i++)
    {
        ans=ans^i;
    }
    
    cout<<ans	<<endl;
}

int main(){

    int n;
    cin>> n;
    int num[100];
    input(num,n);
    duplicate(num,n);

    
    return 0;
}