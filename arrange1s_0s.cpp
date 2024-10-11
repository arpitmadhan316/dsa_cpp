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
void sortit(int arr[],int size){
    int i=0,j=size-1;
    
    while(i<j){
        if (arr[i]==0 ){
            i++;
        }
        if (arr[j]==1){
        j--;}
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }

}
int main(){
    int n;
    int arr[1000];
    cout<<"size of your array: ";
    cin>>n;
    inputarr(arr,n);
    sortit(arr,n);
    printarr(arr,n);
}