#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

template <typename T>
void showContent(const T& list_name){
 std::for_each(std::begin(list_name), std::end(list_name), [](string element) {    cout << element<<endl; });
};
int main()
{
  list<string> list_name{"Mike","Mike","Cool","Mike","Kowf","Cool"};
  showContent(list_name);
  cout<< endl;
  auto newEnd = unique(list_name.begin(),list_name.end());
  list_name.erase(newEnd,list_name.end());
  showContent(list_name);
  auto insertNew = upper_bound(list_name.cbegin(),list_name.cend(),"Dool");
  list_name.insert(insertNew,"Dool");
  cout<<"insert"<<endl;
  showContent(list_name);
  return 0;
}
