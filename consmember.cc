#include<iostream>
using namespace std;

class Point{
	int x,y;
	public:
	Point();
	Point(int,int);
	void print();
};
Point::Point(){
	x=10;
	y=10;
}

Point::Point(int a, int b):x(a),y(b){
}

void Point::print(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	Point *a=new Point();
	a->print();
	delete a;
}
