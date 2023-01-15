#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int compress(vector <char> &chars){

    int i=0;
    int n=chars.size();
    int ansindex=0;
   
   while(i<n){
    int j=i+1;
    while(j<n && chars[j]==chars[i]){
        j++;
    }
    // yaha kab aaoge
    // when we encounter a new character
    // when j is gretear than the size 

    chars[ansindex++]=chars[j];
    int count=j-i;

    if(count >1){
        string cnt=to_string(count);
        for(char ch:cnt){
            chars[ansindex++]=ch;
        }
    }

    i=j;


   }
    for (int a=0;a<chars.size();a++){
        cout<<chars[a];
    }
    cout<<endl;
   return ansindex;
}

int main(){

    vector<char> c;
    for (int i=0;i<6;i++){

            char ch;
            cin>>ch;
            c.push_back(ch);
    }

    cout<<compress(c)	<<endl;
    
    return 0;
}