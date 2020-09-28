#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> randNumber;
    for(int i=0;i<n;i++)
    {
        srand((unsigned)time(NULL));
        randNumber.push_back(rand()%1000+1);//生成1到1000随机数
    }
    sort(randNumber.begin(),randNumber.end());
    randNumber.erase(unique(randNumber.begin(),randNumber.end()),randNumber.end());
    for(int x:randNumber)
    {
        cout<<x<<endl;
    }
    return 0;
}
