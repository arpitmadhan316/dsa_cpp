#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to reverse "<<endl;
    cin>>n;
    int digit,ans=0;
    while (n!=0){
        digit =n%10;
        n=n/10;
        ans=(ans*10)+digit;
    }
    cout<<ans;
}

