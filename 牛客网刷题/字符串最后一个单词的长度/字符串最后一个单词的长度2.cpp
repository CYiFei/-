#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main(){
    string input;
    vector<string>arr;
    cout<<"ÊäÈë×Ö·û´®:"; 
    while(cin>>input){
        arr.push_back(input);
    }
    cout<<arr[arr.size()-1].length()<<endl;    
    return 0;
}
