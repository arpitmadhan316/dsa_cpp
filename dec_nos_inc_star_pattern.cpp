#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    while (i <=n) {
        int j=1,m=n-i+1,p=2*i-2,k=1;
        // seedhe nos. ka triangle
        while (j<=m) {
            cout<<j;
            ++j;
        }
        // star pattern
        while (k<=p){
            cout<<"*";
            ++k; 
                
        }
        //ulte nos. ka triangle
        while (m){
            cout<<m;
            --m;
        }
        cout<<endl;    
        ++i;    
    }
    
}    