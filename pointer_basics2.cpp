#include <iostream>
using namespace std;
int main(){
    //A pointer to int, pointing to a garbage value's address
    //int *p; This is a bad practice
    //cout<<*p;
    //int *p=0 A pointer pointing to null which doesn't exist in the memory
    //cout<<*p; Segmentation Fault
    
    
    /*int i=5;
    int *q=&i;
    int *p=0;
    p=&i;
    cout<<"Address using null:"<<p<<endl;
    cout<<"Value using null:"<<*p<<endl; 
    cout<<"Address without using null:"<<q<<endl;
    cout<<"Value without using null:"<<*q<<endl;*/
    /*
    int num=5;
    int *p=&num;
    cout<<"before:"<<num<<endl;
    (*p)++;
    cout<<"after:"<<num<<endl;*/
    /*
    int n=5;
    int *p=&n;
    int *q=p;
    int **q1=&p;
    cout<<"Address 1:"<<q<<endl;
    cout<<"Value 1:"<<*q<<endl;
    cout<<"Address 2:"<<q1<<endl;
    cout<<"Value 2:"<<*q1<<endl;*/
    /*int num=5;
    int *p=0;
    cout<<"before:"<<num<<endl;
    cout<<"after:"<<num<<endl;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;*/
    
    int num=5;
    int *p=0;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<endl;
    


    
    return 0;
}