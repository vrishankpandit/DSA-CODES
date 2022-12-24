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

void sum(int arr[],int n,int m){
        for (int i = 0; i <n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[i]+arr[j]==m){
                    cout<<arr[i]	<<endl;
                    cout<<arr[j]	<<endl;
                    cout<<endl;

                }
            }
            
        }
        
        


}

int main(){

    int n;
    cin>>n;
    int num[100];
    input(num,n);
    cout<<"enter the sum"	<<endl;
    int b;
    cin>>b;
    sum(num,n,b);
    
    return 0;
}