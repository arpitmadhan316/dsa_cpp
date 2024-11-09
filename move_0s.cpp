//Move all zeroes to the right side of the array while maintaining the order of non zero nos. to be same
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
int count0(int arr[],int size){
    int cnt=0;
    for (int j=0;j<size;j++){
        if (arr[j]==0){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int nums1[100];
    int m;
    cout<<"size of array: ";
    cin>>m;
    inputarr(nums1,m);
    cout<<"Before managing 0s:"<<endl;
    printarr(nums1,m);
    cout<<endl;
    int count=count0(nums1,m);
    for(int i=1;i<=count;i++){
        for (int j=0;j<m-1;j++){
            if (nums1[j]==0){
                swap(nums1[j],nums1[j+1]);
            }
        }
    }
    cout<<"After managing 0s:"<<endl;
    printarr(nums1,m);

}