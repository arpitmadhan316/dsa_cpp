//remove duplicates from a sorted array
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
    int num[100];
    int size;
    cout<<"enter size: ";
    cin>>size;
    inputarr(num,size);
    cout<<endl;
    cout<<"Original Array: "<<endl;
    printarr(num,size);
    cout<<endl;
    int i=0,j=0,count=0;
    int uni[100];
    
    while(i<size){
        uni[j]=num[i];
        if (num[i+1]==uni[j]){
            i++;
        }
        else {
            i++;
            j++;
            count++;
        }
    }
    
    cout<<count<<" unique elemnts are present in the given array: "<<endl;
    printarr(uni,count);
}