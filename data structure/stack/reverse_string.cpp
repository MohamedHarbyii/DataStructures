#include <iostream>
#include <stack>
using namespace std;
string reverse(string s)
{
stack<char>reversed;
int len=s.length();
for(short i=0;i<len;i++){
    reversed.push(s[i]);
}
string new_str="";
for(short i=0;i<len;i++){
new_str+=reversed.top();
reversed.pop();
}
return new_str;
}
int main() {
    string str;
    cin>>str;
    cout<<reverse(str);
    return 0;
}
