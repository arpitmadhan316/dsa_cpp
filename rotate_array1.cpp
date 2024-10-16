//rotate an array leftwards by 1
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
    for ( int i=1;i<size;i++){
        swap (num[i],num[i-1]);
    }
    cout<<"Rotated Array: "<<endl;
    printarr(num,size);

}