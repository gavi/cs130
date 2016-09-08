#include <iostream>
using namespace std;

int main(){
	int a=10;
	int *x = &a; //Now x holds the address of integer a
	cout << x <<endl; //Prints out the address
	cout << *x <<endl; //dereference pointer
	*x=30;
	cout << a <<endl;
	return EXIT_SUCCESS;
}
