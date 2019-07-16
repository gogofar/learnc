#include <iostream>
#include <fstream>
using namespace std;
struct Sfile{
  Sfile(){};
  Sfile(const char* inName,int inAge, char* inDOB):age(inAge){
    strcpy(name,inName);
    strcpy(DOB,inDOB);
  }
  char name[30] ;
  char DOB[20];
  int age;
}
int main()
{
  Sfile ff("LiJinbai",30,"kiki");
  ofstream ofs("c:\\bina_file.bin",ios_base::out|ios_base::binary);

  return 0;
}
