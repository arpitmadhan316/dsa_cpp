#include<iostream>
using namespace std;

int string_length(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}
int main(){
    char s[100];
    cout<<"Enter string withut any space,tab,or newline character: ";
    cin>>s;
    int length=string_length(s);
    cout<<"Length of string: "<<length;
}