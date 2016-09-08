#include <iostream>
using namespace std;

int main(){
	int arr[3];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	int *x = arr;
	cout << *(x+1) <<endl;
	return EXIT_SUCCESS;
}
