//Find First and Last Occurence of an element in a sorted Array
#include<iostream>
using namespace std;
void inputarr (int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
}
int firstocc(int arr[],int size,int k){
    int start=0,end=size-1;
    int occ=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==k){
            end=mid-1;
            occ=mid;
        }
        else if (arr[mid]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return occ;
}
int lastocc(int arr[],int size,int k){
    int start=0,end=size-1;
    int occ=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==k){
            start=mid+1;
            occ=mid;
        }
        else if (arr[mid]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return occ;
}
int main(){
    int arr[1000];
    int n,key;
    cout<<"Enter size of the array";
    cin>>n;
    cout<<"Enter the element to search";
    cin>>key;
    inputarr(arr,n);
    cout<<"First occurence of "<<key<<" is at Index: "<<firstocc(arr,n,key)<<endl;
    cout<<"Last occurence of "<<key<<" is at Index: "<<lastocc(arr,n,key)<<endl;

}