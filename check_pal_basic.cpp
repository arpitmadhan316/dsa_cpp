#include<iostream>
using namespace std;
int string_length(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}
bool checkpal(char str[]){
    int s=0;
    int e= string_length(str)-1;
    while(s<=e){
        if (str[s++]!=str[e--]){
            return 0;
        }
    }
    return 1;

}
int main(){
    char s[100];
    cout<<"Enter string withut any space,tab,or newline character: ";
    cin>>s;
    if (checkpal(s)){
        cout<<"Given string is a palindrome"<<endl;
    }
    else{
        cout<<"Given string is not a palindrome"<<endl;
    }
}