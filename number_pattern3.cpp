#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    char a=' ';
    int i=1;
    while (i <=n) {
        int j=1,m=1,p=i;
        while (m<i){
            cout<<a;
            ++m;
        }
        while (j<=n-i+1) {
            cout<<p;
            ++j;
            ++p;
        } 
        cout<<endl;    
        ++i;    
    }

    return 0;
}