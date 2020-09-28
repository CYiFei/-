#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string word;
	vector<string> s; 
	while(cin>>word)
	{
		s.push_back(word);
	}
	cout<<s.back().length()<<endl;
	return 0;
 } 
