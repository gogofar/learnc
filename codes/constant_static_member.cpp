#include <iostream>
#include <string>
using namespace std;

class MyClass{
  static const int num = 100;
  //int elem[num];
};

int main()
{
  //const int MyClass::num;
  cout<< "My Class Num: " << MyClass::num<<endl;

  return 0;
}
