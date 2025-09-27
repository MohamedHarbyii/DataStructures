#include <iostream>
#include <stack>
using namespace std;
void printstack(stack<string> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
bool checkparanthes(string s)
{
    stack<char> paranthese;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='('||s[i]=='{'||s[i]=='[')
        {
         paranthese.push(s[i]);
        }          
        
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
              if(paranthese.empty())
              {
                return false;
              }
              if(paranthese.top()!='('&&s[i]==')')
              {
                return false;
              }
                if(paranthese.top()!='{'&&s[i]=='}')
              {
                return false;
              }
                if(paranthese.top()!='['&&s[i]==']')
              {
                return false;
              }
             paranthese.pop();
            }

    }
  
        
}
int main()
{
    stack<string> balls;
    stack<string> books;
    
    return 0;
}
//نبدا نحط الاقواس الفتح ف الستاك
// الستاك لو فاضي وفيه اقواس قفل يبقا غلط
//لو فيه اقواس فتح ومافيش اقواس قفل غلط برده
//لو اول قوس قفل قابلني زي اخر عنصر في الستاك ادي صح ونشيل القوس من الستاك ونروح للي بعده ونكرر نفس العمليه
//لو قوس مش زي قوس غلط
//لو الاستاك لسه فيه عناصر يبقا غلط