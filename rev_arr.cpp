#include <iostream>
using namespace std;
void inputarr (int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
}
void swapit(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;    
}
void printarr(int arr[],int n){
    for (int j=0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
}
int main(){
    int num[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    inputarr(num,n);
    cout<<"Array before reversing: "<<endl;
    printarr(num,n);
    for (int i=0;i<n/2;i++){
        swapit(num[i],num[n-i-1]);
    }
    cout<<endl<<"Array after reversing: "<<endl;
    printarr(num,n);
}