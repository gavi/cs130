#include <iostream>
#include <string>
using namespace std;

int main(){
	string str="Hello";
	str = str +" " +  "World";
	cout << str.size() <<endl;
	cout << "Enter string:" ;
	cin >> str;
	cout << "The string you entered is of length: " << str.size() <<endl;
	string first="hello";
	string second ="hello";
	if(first==second){
		cout << "The strings are the same"<<endl;
	}
	return EXIT_SUCCESS;
}
