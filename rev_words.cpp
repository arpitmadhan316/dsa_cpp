//reverse words of a string
// this is vscode->siht si edocsv
#include <iostream>
#include <string>
using namespace std;

int count_space(string str){
    int count=0;
    for (int i=0;i<str.length();i++){
        if (str[i]==' '){
            count++;
        }
    }
    return count;
}
bool check_space(char c){
    if (c==' '){
        return 1;
    }
    return 0;
}
void rev(string& str,int s,int e){
    int start=s;
    int end=e;
    while(s<=e){
        swap (str[s++],str[e--]);
    }
}
int main()
{
    string s;
    cout << "Enter the string to reverse wrt words: ";
    getline(cin, s);
    int sp=count_space(s),count=0;
    int st,e,t=1;
    for (int i=0;i<=s.length();i++){
        if (check_space(s[i])){
            count++;
            
        }
        else {
            continue;
        }
        if (count==1&&sp==1){
            st=0;
            e=i-1;
            rev(s,st,e);
            st=i+1;
            e=s.length()-1;
            rev(s,st,e);
            break;
        }
        if (count==1){
            st=0;
            e=i-1;
            rev(s,st,e);
        }
        else if(count==sp){
            st=e+2;
            e=i-1;
            rev(s,st,e);
            st=i+1;
            e=s.length()-1;
            rev(s,st,e);
        }
        else if(count>1&&count<sp){
            st=e+2;
            e=i-1;
            rev(s,st,e);
        }
        else {
            continue;
        }
    }
    if (count ==0){
        rev(s,0,s.length()-1);
    }
    cout<<endl<<s<<endl;
}