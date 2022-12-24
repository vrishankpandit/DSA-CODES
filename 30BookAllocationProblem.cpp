#include<iostream>
using namespace std;

bool ispossible(int arr[],int size,int students,int mid){

    int studentcount=1;
    int pagesum=0;
    for (int i = 0; i < size; i++)
    {
        if (pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(arr[i]>mid || studentcount>students){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
    
}

int allocatebooks(int arr[],int size,int students){
    
    

    int start=0;
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    cout<<"print "<<sum	<<endl;
    int end=sum;
    int mid=start + (end-start)/2;
    cout<<mid	<<endl;
    int ans=-1;

    while(start<=end){

        if (ispossible(arr,size,students,mid)){

            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
                         
                

        mid=start + (end-start)/2;

    }
    return ans;

}
int main(){
    int arr[4]={10,20,30,40};
    cout<<allocatebooks(arr,4,2)	<<endl;



    return 0;
}