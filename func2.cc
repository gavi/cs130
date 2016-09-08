#include <iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int sum(int a,int b,int c){
	return a+b+c;
}

int main(){
	cout << "Sum is :" <<sum(10,20,20)<<"and"<<sum(10,20)<<endl;
	return EXIT_SUCCESS;
}
