#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool palindrome(char arr[],int n){

    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
  
        s++;
        e++;
        
    }
    return true;

}

int getlength(char a[]){
    int count =0;
    for (int i=0;a[i]!='\0';i++){
        count++;
    }
}


int main(){

    char name[20];

    cin>>name;
    int len=getlength(name);
    cout<<palindrome(name,len)	<<endl;
    
    return 0;
}