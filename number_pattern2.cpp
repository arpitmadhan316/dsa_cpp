#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    char a=' ';
    int i=1;
    while (i <=n) {
        int j=1,m=n-i;
        while (m>0){
            cout<<a;
            --m;
        }
        while (j<=i) {
            cout<<i;
            ++j;
        } 
        cout<<endl;    
        ++i;    
    }

    return 0;
}