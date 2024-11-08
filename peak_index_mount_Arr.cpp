//To find the peak index in a mountain like array 
//      _       ->this index is needed
//    _   _
//   _     _
//  _       _
// _
#include<iostream>
using namespace std;
void inputarr (int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
}
int peak(int arr[],int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2; 
    
    while (start <= end) {
        if (arr[mid] <= arr[mid + 1]) {
            start = mid + 1;
        } 
        else if (arr[mid] <= arr[mid - 1]) {
            end=mid-1;
        }
        else{
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    
    return -1; // This should ideally never be reached
}
int main(){
    int arr[1000],n;
    cout<<"enter size";
    cin>>n;
    inputarr(arr,n);
    cout<<"peak index: "<<peak(arr,n);

}


