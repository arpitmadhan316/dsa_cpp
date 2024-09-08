#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter amount"<<endl;
    cin>>n;
    switch (1){
        case 1: k=n/100;
                cout<<k<<" 100 rupee notes"<<endl;
                n=n-(k*100);
        case 2: k=n/50;
                cout<<k<<" 50 rupee notes"<<endl;
                n=n-(k*50);
        case 3: k=n/20;
                cout<<k<<" 20 rupee notes"<<endl;
                n=n-(k*20);        
        case 4: 
                cout<<n<<" 1 rupee notes"<<endl;        
    }
    cout<<endl;
}    