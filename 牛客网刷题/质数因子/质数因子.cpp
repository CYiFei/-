#include<iostream> 
#include<math.h>
using namespace std;
int main()
{
    long int input;
    while(cin>>input)\\180
    {
        for(int a=2;a<=sqrt(input);a++)\\13
        {
            while(input%a==0)\\90
            {
                cout<<a<<' ';
                input=input/a;
            }
        }
        if(input>1)
            cout<<input<<' ';
    }
    return 0;
}
