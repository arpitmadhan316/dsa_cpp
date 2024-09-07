#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    char a=' ';
    int i=1;
    while (i <=n) {
        int j=1,m=i-1;
        while (j<=n) {
            if (j<=m){
                cout<<a;
            }
            else{
                cout<<i;
            }
            
            ++j;
        } 
        cout<<endl;    
        ++i;    
    }

    return 0;
}