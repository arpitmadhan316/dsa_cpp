#include <iostream>
using namespace std;

int binarysearch (int arr[],int size,int key){
    int s=0,e=size-1,mid;
    mid=(s+e)/2;
    while (s<=e){
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid =(s+e)/2;
    }
    return -1;
}


int main(){
    int even[] ={1,5,19,27,33,47};
    int odd[]= {22,31,47,59,83};
    int E= binarysearch(even,6,50);
    int O= binarysearch(odd,5,59);
    cout<<"for even"<<E<<endl;
    cout<<"for odd"<<O;
}