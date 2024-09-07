#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number to check odd or even: ";
    cin>>n;

    if (n%2==0){
        cout<<"Given number is even"<<endl;
    }
    else {
        cout<<"Given number is odd"<<endl;
    }
}