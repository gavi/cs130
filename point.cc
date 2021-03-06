#include<iostream>
#include<cmath>
using namespace std;



class Point{
	public:
	int x,y;
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
	int ydiff=y-other->y;
	return sqrt(xdiff*xdiff+ydiff*ydiff);
}


void Point::print(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}
double distance(Point *a,Point *b){
	int xdiff=a->x-b->x;
	int ydiff=a->y-b->y;
	return sqrt(xdiff*xdiff+ydiff*ydiff);
}
int main(){
	Point *a=new Point(10,10);
	Point *b=new Point(20,30);
	cout <<"Distance is "<<a->distance(b)<<endl;
	cout <<"Distance is "<<b->distance(a)<<endl;
	cout <<"Distance is "<<a->distance(a)<<endl;
	cout << distance(a,b)<<endl;
	delete a;
	delete b;
}

















