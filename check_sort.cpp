#include <iostream>
using namespace std;

void inputarr (int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
}
int main(){
    int arr[1000],size,countinc=0,countdec=0;
    cout<<"enter size: ";
    cin>>size;
    inputarr(arr,size);

    for (int i=0;i<size-1;i++){
        if (arr[i]>arr[i+1]){
            countinc++;
            break;
        }
    }
    for (int i=0;i<size-1;i++){
        if (arr[i]<arr[i+1]){
            countdec++;
            break;
        }
    }
    if (countinc==0){
        cout<<"Given Array is sorted in increasing order"<<endl;
    }
    else if (countdec==0){
        cout<<"Given Array is sorted in decreasing order"<<endl;
    }
    else {
        cout<<"Array is not sorted"<<endl;
    }
}