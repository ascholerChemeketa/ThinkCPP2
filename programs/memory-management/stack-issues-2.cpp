#include <iostream>
using namespace std;

int* foo(int value) {
  int x = value; // Local variable
  int* xAddress = &x;
  cout << "xAddress: " << xAddress << endl;
  cout << "xAddress points to: " << *xAddress << endl;
  return xAddress;
  // x is removed from the stack when foo() returns!!!
}

int main() {
  int* badPointer = foo(5); // Call foo, store address it returns
  cout << "Address in badPointer: ";
  cout << badPointer << endl;
  cout << "Value pointed to by badPointer: ";
  cout << *badPointer << endl; // Undefined behavior!
}