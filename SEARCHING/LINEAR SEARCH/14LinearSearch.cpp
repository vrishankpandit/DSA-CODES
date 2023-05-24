#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
  return 0;  
}
int main(){
    int num[10]={10,3,45,6,3,4,34,2,5,12};
    cout<<"the array is "	<<endl;
    for(auto i:num){
        cout<<i	<<" ";
    }
    cout<<endl;

    cout<<"enter the key"	<<endl;
    int n;
    cin>>n;

    bool found=search(num,10,n);

    if(found){
        cout<<"key is present"	<<endl;

    }
    else{
       cout<<"key is absent"	<<endl;
    }




    return 0;
}