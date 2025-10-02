#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push("first");
    q.push("second");
    q.push("third");
    q.push("fourth");
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    
}