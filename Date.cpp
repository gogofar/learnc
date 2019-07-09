#include <iostream>
#include "date2.cpp"
using namespace std;

class Date{
 private:
  int day, month, year;
 public:

  Date(int inMonth, int inDay, int inYear): day(inDay), month(inMonth), year(inYear){}

  void operator+= (int daysToAdd){
    day += daysToAdd;
  }

  void operator-= (int daysToSub){
    day -= daysToSub;
  }

  void displayDate(){
    cout << month <<"/" << day << "/" << year;
  }
};

int main(){
  Date holiday(2,22,1988);
  holiday.displayDate();

  cout << "holiday += 25 gives:";
  holiday += 25;
  holiday.displayDate();
  Show s;
  s.show();
  return 0;
}
