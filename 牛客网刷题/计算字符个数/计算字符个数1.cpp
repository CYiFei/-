#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char character;
    cin>>str;
    cin>>character;
    int n=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == tolower(character)||str[i] == toupper(character))
            n++;
    }
    cout<<n;
    return 0;
}
