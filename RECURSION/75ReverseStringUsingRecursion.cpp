#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// vector<string> reversestring(string s,int length){

//     vector<string> temp;

//     if(length<0){ 
//         return temp;
//     }

//     temp.push_back(s[length-1]);

//     reversestring(s,length-1);
    
// }

void reversestring(string& s,int i,int j){
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    reversestring(s,++i,--j);
}

int main(){

    string s="abcde";
    reversestring(s,0,s.length()-1);
    cout<<s;
    return 0;
}