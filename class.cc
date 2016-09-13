#include<iostream>
using namespace std;

class Point{
	int x,y;
	public:
	void set_values(int,int);
	void print();
};

void Point::set_values(int a, int b){
	x=a;
	y=b;
}

void Point::print(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	Point *a=new Point;
	a->set_values(10,20);
	a->print();
	delete a;
}
