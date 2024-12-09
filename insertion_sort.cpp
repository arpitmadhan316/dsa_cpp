#include <iostream>
using namespace std;

void inputarr (int arr[],int size){
    cout<<"Enter the elements of array\n";
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
    int arr[100],n;
    cout<<"enter the size of the array- ";
    cin>>n;
    inputarr(arr,n);
    cout<<"Original Array-"<<endl;
    printarr(arr,n);
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<endl<<"Sorted Array-\n";
    printarr(arr,n);
}