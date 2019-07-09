#include <iostream>
using namespace std;

template <typename T1, typename T2>
class HoldsPair{
 private:
  T1 value1;
  T2 value2;
 public:
  HoldsPair(const T1& val1, const T2& val2): value1(val1), value2(val2){}

  const T1& GetFirstValue(){
    return value1;
  }

  const T2& GetSecondValue(){
    return value2;
  }
};

int main()
{
  int val1 = 1, val2 = 2;
  HoldsPair<int,int> hp(val1,val2);
  cout<< "First value:" << hp.GetFirstValue() << endl;
  cout<< "Second value:" << hp.GetSecondValue() << endl;

  int val3 = 5;
  char* val4 = "Good bay,yesterday!";
  HoldsPair<int, char*> hp1(val3,val4);
  cout<< "First value:" << hp1.GetFirstValue() << endl;
  cout<< "Second value:" << hp1.GetSecondValue() << endl;

  return 0;
}
