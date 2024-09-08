#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    char c='A';
    for (int i=1;i<=n;++i){
        
        char c='A';
        //seedhe alphabets ka triangle
        for (int j=1; j<=(n-i+1);++j){
            cout<<c;
            ++c;
        }
        //spaces
        for (int k=1; k<= ((2*i)-2);++k){
            cout<<' ';
        }
        //ulte alphabets ka triangle
        char a = 'A'+(n-i);
        for (int m=1;m<=(n-i+1);++m){
            
            cout<<a;
            --a;
        }


        cout<<endl;
    }
}