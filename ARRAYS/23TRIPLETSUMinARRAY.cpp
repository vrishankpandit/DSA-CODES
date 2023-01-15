#include<iostream>
using namespace std;
int triplet(int num[],int n,int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            for (int z = j+1; z < n; z++)
            {
                if(num[i]+num[j]+num[z]==sum){
                    return num[i],num[j],num[z];
                    

                }
            }
            
        }
        
    }
    
}
int main(){
    int n=9;
    int ok[9]={1,4,3,5,6,4,3,6,7};
    int c;
    cout<<"enter the sum "	<<endl;
    cin >>c;
    cout<<triplet(ok,9,c)	<<endl;
    return 0;
}