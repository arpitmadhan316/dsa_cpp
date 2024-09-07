#include<iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter the number you want to find sum: ";
    cin >>n ;
    int sum = 0,i=1;

    while (i<=n){
        sum=sum+i;
        ++i;
    }
    cout << "Sum of "<<n<<" natural numbers is= " << sum;
}