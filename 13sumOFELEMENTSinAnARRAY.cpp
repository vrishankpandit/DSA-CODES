#include <iostream>
using namespace std;
int sum=0;
int sum1(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
    cout<<"enter the value for index "<<i	<<endl;
    cin>>arr[i];
    sum=sum+arr[i];
   }
   
return sum;
}
int main()
{

    int n;
    cin >> n;
    int num[100];
    cout<<"sum is "<<sum1(num,n)	<<endl;

    return 0;
}