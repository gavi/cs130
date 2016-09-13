#include<iostream>
#include<cmath>
#include<unistd.h>
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

class Triangle{
	Point *a,*b,*c;
	public:
	Triangle(Point *x,Point *y,Point *z):a(x),b(y),c(z){}
	~Triangle(){
		delete a;
		delete b;
		delete c;
	}
	void print(){
		a->print();
		b->print();
		c->print();
	}
};


int main(){
	while(true){
		Point *a=new Point(10,10);
		Point *b=new Point(20,30);
		Point *c= new Point(40,10);
		delete a;
		delete b;
		delete c;
		//usleep(50 * 1000);
	}
}






