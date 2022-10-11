#include <iostream>
#include <stack>

using namespace std;

int main() {

  stack<string>nama;
  
  nama.push("M.Kom");
  nama.push("S.Kom");
  nama.push("Hardi");
  nama.push("Melvani");
  nama.push("Sri");
  
  cout << "Sekretaris Prodi: ";

  while(!nama.empty()) {
    cout << nama.top()<<" ";

    nama.pop();
  }
  cout << endl;
  return 0;
}
