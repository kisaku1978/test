#include <iostream>
using namespace std; 

class CA {
  int a;
    public:
      int b; 
      CA(){
	      a = 0;
	      cout << "構造函數： " << a << endl;
	      b = 10; 
      }
      ~CA(){
	      cout << "析構函數： " << a << endl;
      }
      void setA(int x) {
        a = x;
      }
      void print() {
        cout << "print： " << a << endl;
      }
      void test(void);
};
void CA::test(void){
  cout << __FUNCTION__ << ", " << __LINE__  << ": " << endl;
}
int main(void){
  CA ca;
  ca.setA(10);
  ca.print();
  ca.test();
  ca.b = 30; 
  cout << "b: " << ca.b << endl;
  return 0;
}
