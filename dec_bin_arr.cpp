#include <iostream>
using namespace std;

void printarr(int arr[],int size){
    for (int j=size-1;j>=0;j--){
        cout<<arr[j]<<"";
    }
}
int dec_bin(int arr[],int n){
    int i=0;
    while(n>=1){
        if (n==1){
            arr[i]=1;
            i++;
            break;
        }
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    return i;
}
int main(){
    int n;
    cout<<"enter decimal number";
    cin>>n;
    int dec[100];
    int size=dec_bin(dec,n);
    printarr(dec,size);
}