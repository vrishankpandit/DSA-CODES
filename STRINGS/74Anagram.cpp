#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

   bool doesnotexist(vector <char> cha,char ch){
        
        for(int i=0;i<cha.size();i++){
            if(cha[i]==ch){
                return false;
            }
        }
        
        return true;
        
    }
    
    bool isAnagram(string a, string b){
    vector<char> ans;    
    vector<char> ans1;    
        
    if(a.length()!=b.length()){
        return false;
    }
    else{
        for(int i=0;i<a.length();i++){
            if(doesnotexist(ans,a[i])){
                ans.push_back(a[i]+0);
            }
        }
        
        for(int i=0;i<b.length();i++){
            if(doesnotexist(ans1,b[i])){
                ans1.push_back(b[i]+0);
            }
        }
        
        sort(ans.begin(),ans.end());
        sort(ans1.begin(),ans1.end());
        
        for(int i=0;i<a.length();i++){
            if(ans[i]!=ans1[i]){
                return false;
            }
        }
        return true;   
        }        
    }

int main(){

    string a="lkdpazahvk";
    string b="dvalpkkahz";
    cout<<isAnagram(a,b);
    
    return 0;
}