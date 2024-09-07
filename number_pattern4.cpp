#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    char a=' ';
    int i=1;
    while (i <=n) {
        int j=1,m=1,p=1,k=i-1;
        while (m<n-i+1){
            cout<<a;
            ++m;
        }
        while (j<=i) {
            cout<<p;
            ++p;
            ++j;
        }
        while (k>0){
                cout<<k;
                --k;
                
        }

        cout<<endl;    
        ++i;    
    }

    return 0;
}