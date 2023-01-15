#include<iostream>
#include<algorithm>
using namespace std;

char getmaxoccucharac(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){

        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }

        arr[number]++;

    }
    int maxi=-1,ans=0;
    for(int j=0;j<26;j++){
       if(maxi<arr[j]){
        maxi=arr[j];
        ans=j;
       }
    }

    char finalans='a'+ans;
    return finalans;


}

int main(){
    string s;
    cin>>s;
    cout<<getmaxoccucharac(s);
    
    return 0;
}