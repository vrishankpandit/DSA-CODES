#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')  || (ch>=0 && ch<=9) ){

        return true;
    }
        return false;
}

char lowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>=0 && ch<=9)){
        return ch;
    }
    else {
        char temp=ch+'a'-'A';
        return temp;
        }
}

bool checkpalindrome(string a){

    int s=0;
    int e=a.length()-1;

    while(s<e){
        if(a[s]!=a[e]){
            return false;
        }
        else{
            s++;
            e++;

        }

    }
    return true;


}

bool ispalindrome(string s){

    string temp="";
    for (int j=0;j<s.length();j++){
            if (valid(s[j])){
                temp.push_back(lowercase(s[j]));
            }

    }

    return checkpalindrome(temp);

}
int main(){

    string a;
    cin>>a;
    cout<<a<<endl;
    cout<<ispalindrome(a)	<<endl;
    return 0;
}