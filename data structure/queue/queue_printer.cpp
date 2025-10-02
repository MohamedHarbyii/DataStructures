#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template<typename T>
void print_queue(queue<T>q);
template<typename T>
void print_tasks(vector<T>printer_tasks)
{
    int v_size=printer_tasks.size();
    queue<T>tasks;
    for(short i=0;i<v_size;i++){
        tasks.push(printer_tasks[i]);
    }
    print_queue(tasks);
}

template<typename T>
void print_queue(queue<T>q){
while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
}}
int main() {
  vector<string>v={"Report.docx", "Photo.jpg", "Sheet.xlsx", "Presentation.pptx"};
   print_tasks(v);
    return 0;
}