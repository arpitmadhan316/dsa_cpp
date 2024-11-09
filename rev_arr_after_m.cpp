//To reverse an array after an index m, taken by user as input
#include <iostream>
using namespace std;
void inputarr (int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
}
void swapit(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void reverseArray(int arr[] ,int size, int m) {
    int j=0;
    int s=m+1;
    for (int i=m+1;i<=((size+m)/2);i++){
        swapit(arr[i],arr[size-j-1]);
        j++;
    }      	
}
void printarr(int arr[],int n){
    for (int j=0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
}

int main(){
    int num[1000],size,m;
    cout<<"enter size: ";
    cin>>size;
    cout<<"Enter the index m: ";
    cin>>m;
    inputarr(num,size);
    cout<<endl;
    printarr(num,size);
    cout<<endl;
    reverseArray(num,size,m);
    cout<<endl;
    printarr(num,size);
}