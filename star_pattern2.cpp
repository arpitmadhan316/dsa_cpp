#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    char a=' ',b='*';
    int i=1;
    while (i <=n) {
        int j=1,m=n-i+1;
        while (j<=m) {
            cout<<"*";
            ++j;
        } 
        cout<<endl;    
        ++i;    
    }

    return 0;
}