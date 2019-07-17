#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream fs;
  fs.open("c:\\test.txt",ios_base::out);
  if(fs.is_open()){
    fs <<"Hello World!";
    fs.close();
  }else{
    cout << "file open error!";
  }
  return 0;
}
