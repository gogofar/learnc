#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
  list<int> list_1{1,2,3,4,5};
  vector<int> list_copy(list_1.size()*2);
  copy(list_1.cbegin(),list_1.cend(),list_copy.begin());
  for_each(list_1.cbegin(),list_1.cend(),[](int element){cout<<element<<endl;});

  remove(list_copy.begin(),list_copy.end(),3);
  for_each(list_copy.cbegin(),list_copy.cend(),[](int element){cout<<element<<endl;});

  auto newEnd = remove(list_1.begin(),list_1.end(),2);
  list_1.erase(newEnd,list_1.end());
  //remove(list_1.begin(),list_1.end(),4);

  for_each(list_1.cbegin(),list_1.cend(),[](int element){cout<<element<<endl;});
  return 0;
}
