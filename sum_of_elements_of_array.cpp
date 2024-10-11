#include <iostream>
using namespace std;

int main(){
    int size,sum=0;
    cout<<"enter size: ";
    cin>>size;
    int num[1000];
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>num[i];
        sum+=num[i];
    }
    cout<<"sum of elements of given array= "<<sum;

}    
