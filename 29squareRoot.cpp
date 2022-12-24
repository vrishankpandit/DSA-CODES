#include<iostream>
using namespace std;

int sqrt(int n){

    int start=0;
    int end=n-1;
    int mid=start + (end-start)/2;
    int ans=-1;

    while(start<end){
    int square=mid*mid;

        if (square==n){
            return mid;
        }

        if(square>n){
            end=mid-1;
        }
        else{
            start=mid;
        }

        ans=start;
        mid=start + (end-start)/2;

    }
    return ans;

}

double sqrt1(int a,int precision,int tempsol){

    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<a;j=j+factor){
                ans=j;
        }
    }
        return ans;
}

int main(){
    int c;
    cout<<"enter the number"	<<endl;
    cin>>c;


    int tempsol=sqrt(c);

    cout<<"IS"<<sqrt1(101,3,tempsol)	<<endl;

    return 0;
}