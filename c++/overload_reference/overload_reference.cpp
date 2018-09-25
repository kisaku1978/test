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
      int getA(void) {
        return a; 
      }
      void print() {
        cout << "print： " << a << endl;
      }
      void test(void);
      CA& operator=(CA &x){
	this->b=x.a; 
	x.b=this->a; 
	return *this; 
      }
};
void CA::test(void){
  cout << __FUNCTION__ << ", " << __LINE__  << ": " << endl;
}
int main(void){
  CA ca, cb;
  ca.setA(10);
  ca.print();
  ca.test();
  ca.b = 30; 
  cout << "====================" << "\n"; 
  cout << "ca.a: " << ca.getA() << endl;
  cout << "ca.b: " << ca.b << endl;
  cout << "cb.a: " << cb.getA() << endl;
  cout << "cb.b: " << cb.b << endl;
  cb.setA(20); 
  cb.b=50; 
  cout << "====================" << "\n"; 
  cout << "ca.a: " << ca.getA() << endl;
  cout << "ca.b: " << ca.b << endl;
  cout << "cb.a: " << cb.getA() << endl;
  cout << "cb.b: " << cb.b << endl;
  ca=cb; 
  cout << "====================" << "\n"; 
  cout << "ca.a: " << ca.getA() << endl;
  cout << "ca.b: " << ca.b << endl;
  cout << "cb.a: " << cb.getA() << endl;
  cout << "cb.b: " << cb.b << endl;
  return 0;
}
