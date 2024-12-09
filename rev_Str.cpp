#include<iostream>
using namespace std;

int string_length(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}
void rev_str(char str[]){
    int i=0,j=string_length(str)-1;
    while (i<=j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main(){
    char s[100];
    cout<<"Enter string withut any space,tab,or newline character: ";
    cin>>s;
    rev_str(s);
    cout<<"Reversed String: "<<s;
}