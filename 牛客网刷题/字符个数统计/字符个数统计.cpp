#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[128]={0};
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(a[static_cast<int>(str[i])] == 0)
        {
            a[static_cast<int>(str[i])]++;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
