#include<iostream>
using namespace std;

     
 
int max(int num[],int a){
         int max = INT_FAST16_MIN;
          for (int i = 0; i < a; i++)
          {

            
            if(num[i]>max){
                max=num[i];
            }
          }
        return max;  
}
int min(int num[],int a){
         int min = INT_FAST8_MAX;
          for (int i = 0; i < a; i++)
          {
            if(num[i]<min){
                min=num[i];
            }
          }
         return min; 
}

int main(){
    int n;
    cin>>n;
int num[100];

for (int i = 0; i < n; i++)
{
   cin>> num[i];
}

cout<<"max value is "<<max(num,n)	<<endl;
cout<<"min value is "<<min(num,n)	<<endl;



    return 0;
}