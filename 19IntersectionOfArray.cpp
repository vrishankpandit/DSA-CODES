#include<iostream>
using namespace std;

void input(int arr[],int n){
    cout<<"enter the values"	<<endl;

    for (int i = 0; i <n; i++)
    {
        cout<<"enter the value at index "<<i	<<endl;
        cin>>arr[i];
    }
    
}

// void intersect(int arr[],int n,int brr[],int m){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(arr[i]==brr[j]){
//                 cout<<arr[i]	<<endl;
//             }

//         }
        
//     }
    

    
// }                                             //TIME LIMIT EXCEEDED OF THIS,find new so

template<class vector>
vector intersect(vector arr[],int n,vector brr[],int m){
    vector <int> ans;
    int i=0,j=0;
    while(i<n && j<m ){
        if(arr[i]<arr[j]){
            i++;

        }
        if(arr[i]==arr[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
         if(arr[i]>arr[j]){
            j++;

        }

    }
    
}




int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int num[100];
    int bum[100];

    input(num,n);
    input(bum,m);
    intersect(num,n,bum,m);
    
    return 0;
}