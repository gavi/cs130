#include<iostream>
#include<cmath>
using namespace std;

class Point{
	int x,y;
	public:
	Point();
	Point(int,int);
	double distance(Point *other);
	void print();
};
Point::Point():x(0),y(0){
}

Point::Point(int a, int b):x(a),y(b){
}
double Point::distance(Point *other){
	int xdiff=x-other->x;
	int ydiff=x-other->y;
	return sqrt(xdiff*xdiff+ydiff*ydiff);
}


void Point::print(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	Point *a=new Point(10,10);
	Point *b=new Point(20,30);
	cout <<"Distance is "<<a->distance(b)<<endl;
	delete a;
	delete b;
}
