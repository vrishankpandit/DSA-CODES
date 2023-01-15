#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){

    int start=0;
    int end=n-1;
    int mid=(start+end)/2;     //here the fault is that if while adding the value exceeds the limit of an integer which is  2 pow 31 -1,then it might show error so instead use this formula  MID=START + (END-START)/2
    while(start<=end){
        
 if (key==arr[mid]){
    return mid;
 }
 if (key>arr[mid]){
    start=mid+1;
 }
 else{
    end=mid-1;
 }
 mid=(start+end)/2;
    }
    return -1;
    
}
int main(){
    int even[6]={3,5,7,9,10,11};
    int odd[7]={4,7,9,10,14,15,17};
    int key;
    // cout<<"enter the key"	<<endl;
    // cin>>key;
    int evenindex=binarysearch(even,6,10);
    cout<<evenindex	<<endl;
    return 0;
}