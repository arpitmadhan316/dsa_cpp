//square root of a number using binary search
#include <iostream>
using namespace std;
int root(int n){
    int s=1,e=n,ans=-1;
    long long int m;
    while(s<=e){
        m=s+(e-s)/2;
        if (m*m==n){
            return m;
        }
        else if (m*m<n){
            ans=m;
            s=m+1;
        }
        else {
            e=m-1;
        }
    }
    return ans;

}
double precise(int main_num,int temp_num,int precision){
    double fac=1,ans=temp_num;
    for (int i=0;i<precision;i++){
        fac=fac/10;
        for(double j=ans;j*j< main_num;j=j+fac){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n,p;
    cout<<"enter number";
    cin>>n;
    cout<<"enter number of decimal precision";
    cin>>p;
    cout<<endl<<precise(n,root(n),p);
}