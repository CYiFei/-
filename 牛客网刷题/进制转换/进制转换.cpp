#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void addI(string& str,int a){
    if(str.length()==0){
        while(a>0){
            str+='0'+a%10;
            a/=10;
        }
    }
    reverse(str.begin(),str.end());
    return ;
    reverse(str.begin(),str.end());
    int sum=str[0]-'0'+a;
    str[0]='0'+sum%10;
    int carry=sum/10;
    for(int i=1;i<str.length();i++)
    {
        sum=str[i]-'0'+carry;
        str[i]=sum%10+'0';
        carry=sum/10;
    }
    if(carry>0)
    {
        str+=(char)(carry+'0');
    }
    reverse(str.begin(),str.end());
}
void multi16(string& str){
    if(str.length()==0)
        return ;
    reverse(str.begin(),str.end());
    int carry=0;
    int mul=0;
    for(int i=0;i<str.length();i++)
    {
        mul=16*(str[i]-'0')+carry;
        str[i]=mul%10+'0';
        carry=mul/10;
    }
    if(carry>0){
        while(carry>0){
            str+=carry%10+'0';
            carry/=10;
        }
    }
    reverse(str.begin(),str.end());
}
int main()
{
    string str;
    string res;
    int tmp;
    while(cin>>str)
    {
        res.clear();
        for(int i=2;i<str.length();i++){
            multi16(res);
            if(isupper(str[i]))
                tmp=10+str[i]-'A'; 
            else if(islower(str[i]))
                tmp=10+str[i]-'a';
            else
                tmp=str[i]-'0';
            addI(res,tmp);
        }
        cout<<res<<endl;
    }
    return 0;
}
