#include<iostream>
using namespace std;
int num(int arr[],int n){
      for (int i = 0; i < n-i-1; i++)
      {
        
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]= temp;
      }
      
    
}
int main(){
    int n;
    cout<<"enter the size"	<<endl;
    cin>>n;
    int a[100];

    for (int i = 0; i <n; i++)
    {
        cout<<"enter the value at index "<<i	<<endl;
        cin>>a[i];
    }
    num(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]	<<" ";
    }
    


    
    
    return 0;
}