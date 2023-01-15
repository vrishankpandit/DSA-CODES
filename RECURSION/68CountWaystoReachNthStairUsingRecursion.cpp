#include<iostream>
using namespace std;

int countdistinctwaystoclimbstairs(long long nstairs){

    if(nstairs<0){
        return 0;
    }
    if(nstairs==0){
        return 1;
    }

    int ans=countdistinctwaystoclimbstairs(nstairs-1)+countdistinctwaystoclimbstairs(nstairs-2);

    return ans;


}

int main(){
    
    cout<<"enter the nth stair"	<<endl;
    int n;
    cin>>n;

    cout<<"distinct ways to reach it are"	<<endl;
    cout<<countdistinctwaystoclimbstairs(n)<<endl;





    return 0;
}