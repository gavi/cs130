#include <iostream>
#include <string>
using namespace std;

struct Person{
	int id;
	string first_name;
	string last_name;
};

int main(){
	Person gavi = {1,"Gavi","Narra"};
	cout << gavi.id << '\t' << gavi.first_name << '\t' << gavi.last_name << endl;
	Person *p= new Person;
	p->id=10;
	p->first_name="John";
	p->last_name="Doe";
	cout << p->id << '\t' << p->first_name <<'\t' << p->last_name <<endl;
	delete p;
	return EXIT_SUCCESS;
}
