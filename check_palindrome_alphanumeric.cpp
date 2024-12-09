//Check palindrome while considering only alphabets and numbers ignoring special characters and ignore case sensitivity as well
#include <iostream>
#include <string>
using namespace std;
int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
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

void pal(string str)
{
    int start = 0, end = str.length() - 1;
    while (start <= end)
    {
        str[start] = lowercase(str[start]);
        str[end] = lowercase(str[end]);
        if (!((str[start] >= 'a' && str[start] <= 'z') || (str[start] >= '0' && str[start] <= '9')))
        {
            start++;
            continue;
        }
        if (!((str[end] >= 'a' && str[end] <= 'z') || (str[end] >= '0' && str[end] <= '9')))
        {
            end--;
            continue;
        }
        if (str[start++] != str[end--])
        {
            cout << "Given string is not a palindrome" << endl;
            return;
        }
    }
    cout << "Given string is a palindrome";
}
int main()
{
    string s;
    cout << "Enter the string to check for palindrome: ";
    getline(cin, s);
    pal(s);
}