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
    int size;
    cout<<"enter size: ";
    cin>>size;
    inputarr(num,size);
    cout<<endl;
    cout<<"Original Array: "<<endl;
    printarr(num,size);
    cout<<endl;
    for (int i=0;i<6;i=i+2){
        swapit(num[i],num[i+1]);
    }
    cout<<endl<<"Array after alternate swapping: "<<endl;
    printarr(num,size);
}
