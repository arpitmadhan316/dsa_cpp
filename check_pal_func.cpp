//checking for a palindrome using char array functions
#include<iostream>
#include <string.h>
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
    char original_str[100];
    strcpy(original_str,s);
    rev_str(s);
    if (!(strcmp(original_str,s))){
        cout<<original_str<<" is a palindrome";
    }
    else{
        cout<<original_str<<" is not a palindrome";
    }
}