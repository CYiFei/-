#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string str1="";
    cin>>str;
    for(int i=str.length()-1;i>=0;i--)
    {
        if(str1.find(str[i])==string::npos)
            str1+=str[i];
    }
    cout<<str1<<endl;
    return 0;
}
