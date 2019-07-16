#include <iostream>
#include <map>
#include <string>
using namespace std;

template <typename T>
void showMap(const T& mapvalue){
  for (auto element = mapvalue.cbegin(); element != mapvalue.cend(); ++element) {
    cout <<  element->first <<"->"<< element->second <<endl;
  }
  cout << endl;
}

int main()
{
  map<int, string> mapValue;
  multimap<int, string> mmapValue;
  mapValue.insert(make_pair (1, "Hello"));
  mapValue.insert(make_pair (1, "World"));

  mmapValue.insert( make_pair (1, "Hello"));
  mmapValue.insert( make_pair (1, "World"));

  showMap( mapValue);
  showMap( mmapValue);

  auto find_key = mapValue.find(1);
  cout << "find 1 :" << find_key->first <<"->"<< find_key->second<<endl;

  cout << "same pairs:" <<mmapValue.count(1) <<endl;
  return 0;
}
