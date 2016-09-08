#include <iostream>
using namespace std;

int main(){
	int arr[2]={10,20};
	int *x = arr;
	cout << *(x+1) <<endl;
	char car[2]={'a','b'};
	char *p=car;
	cout << *(p+1) <<endl;
	return EXIT_SUCCESS;
}
