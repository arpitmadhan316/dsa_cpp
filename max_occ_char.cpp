//Find the char with max occurences in a string
#include<iostream>
#include<string>
using namespace std;
char lowercase(char s)
{
    if (s >= 'a' && s <= 'z')
    {
        return s;
    }
    else if (s >= 'A' && s <= 'Z')
    {
        return s - 'A' + 'a';   
    }
    else {
        return s;
    }
}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int arr[26]={0};
    for (int i=0;i<s.length();i++){
        arr[lowercase(s[i])-'a']++;
    }
    int maxindex=0;
    for (int j=0;j<=25;j++){
        if (arr[j]>arr[maxindex]){
            maxindex=j;
        }
    }
    cout<<"Max occuring is "<<char('a'+maxindex)<<" occuring "<<arr[maxindex]<<" times"<<endl;

}