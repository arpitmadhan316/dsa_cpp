#include <iostream>
using namespace std;
void inputarr (int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
}
void printarr(int arr[],int n){
    for (int j=0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
}
int main(){
    int arr[1000];
    int size;
    cout<<"enter size: ";
    cin>>size;
    inputarr(arr,size);
    cout<<endl;
    cout<<"unsorted array:"<<endl;
    printarr(arr,size);
    cout<<endl;
    for (int i=0;i<size-1;i++){
        int k=i;
        for (int j=i+1;j<size;j++){
            if (arr[j]<arr[k]){
                
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    cout<<endl;
    cout<<"sorted array:"<<endl;
    printarr(arr,size);
}