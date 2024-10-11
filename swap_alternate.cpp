#include <iostream>
using namespace std;

void swapit(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;    
}
void printarr(int arr[],int n){
    for (int j=0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
}
int main(){
    int num[7]={1,2,3,4,5,6,7};
    for (int i=0;i<6;i=i+2){
        swapit(num[i],num[i+1]);
    }
    printarr(num,7);
}