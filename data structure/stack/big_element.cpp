#include <iostream>
#include <stack>
#include<vector>
using namespace std;
stack<int>big_element(vector<int>nums)
{
    short size=nums.size();
    stack<int>big_arr;
    bool is_biggest=true;
    for(short i=0;i<size;i++)
    {
        if(size==i+1){big_arr.push(-1);break;}

      for (short j = i+1; j < size; j++)
      {
        
        if(nums[i]<nums[j])
        {
          big_arr.push(nums[j]);
          is_biggest=false;
          break;
        }
        

      }
      if(is_biggest)
      {
        big_arr.push(-1);
        is_biggest=true;
      }
      
    }
    return big_arr;
}
// ...existing code...
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
// ...existing code...
int main() {
    vector<int>v={4, 5, 2, 10};
   printStack(big_element(v));
    return 0;
}

