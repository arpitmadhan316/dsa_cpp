#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to convert to binary: ";
    cin>>n;
    int bit,i=0;
    float ans=0; 
    while (n!=0){
        bit = n&1;
        ans=((bit* pow(10,i))+ans);
        n=n>>1;
        i++;
    }
    cout<<ans;
}