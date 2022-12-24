#include<iostream>
#include<cmath>
using namespace std;
unsigned long int a=701590986585091644415556358149%601363702787219970639669573943;
unsigned long int x=601363702787219970639669573943/2426834949;

int main(){
int e=601363702787219970639669573943;
int N=701590986585091644415556358149;
int k=1;
int d=2;
unsigned long int phi=(e*d - 1)/k;              //1231188589
 unsigned long int b=N-phi+1;               //1195646361

  unsigned long int disc=pow(b,2)-4*N;      //1478083932


  unsigned long int under=sqrt(disc);      //38845
cout<<(phi)	<<endl;
// cout<<	a<<endl;
// cout<<x<<endl;
cout<<b	<<endl;
cout<<disc<<endl;
cout<<under	<<endl;
    return 0;
}