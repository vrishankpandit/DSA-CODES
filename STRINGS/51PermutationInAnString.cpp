#include<iostream>
using namespace std;

bool ifcheckcount(int a[26],int b[26]){

    for (int i = 0; i < 26; i++)
    {
        if(a[i]!=b[i]){
            return 0;
        }
        return 1;
    }
    
}

bool checkInclusion(string s2,string s1){
    int count1[26]={0};
    //character count array 
     for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }

    //traverse s2 string in window of s1 length and compare
    int i=0;
    int windowsize=s1.length();
    int count2[26]={0};

    // running first window

    while(i<windowsize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    

    if (ifcheckcount(count1,count2)){
        return 1;
    }


    // running next window

        while(i<s2.length()){
           char newchar=s2[i];
            int index=newchar-'a';
            count2[index]++;
        
            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            count2[index]--;
            
            i++;

            if(ifcheckcount(count1,count2)){
                    return 1;
            }

        
        }
        return 0;

}




int main(){
    string s2;
    cin>>s2;
    string s1;
    cin>>s1;
    cout<<checkInclusion(s2,s1)	<<endl;


    return 0;
}