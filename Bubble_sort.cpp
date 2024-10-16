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
void bubsort(int arr[],int size){
    for (int j=1;j<size;j++){
        int count=0;
        for (int i=0;i<size-j;i++){
            if (arr[i+1]<arr[i]){
                swap (arr[i],arr[i+1]);
                count++;
            }
        }
        if (count==0){
            cout<<"sorted already"<<endl;
            return;
        }
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
    bubsort(num,size);
    cout<<"Sorted Array: "<<endl;
    printarr(num,size);
}