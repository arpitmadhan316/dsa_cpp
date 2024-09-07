#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n>0) {
       cout<<"Given Number is positive"<< endl;
    }
    else if(n<0) {
       cout<<"Given Number is negative"<<endl;
    }
    else {
       cout<<"Given Number is 0"<<endl;
    }
    return 0;
}