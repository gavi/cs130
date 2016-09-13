#include<iostream>
using namespace std;

class Point{
	int x,y;
	public:
	Point(int,int);
	void print();
};

Point::Point(int a, int b){
	x=a;
	y=b;
}

void Point::print(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	Point *a=new Point(20,30);
	a->print();
	delete a;
}
