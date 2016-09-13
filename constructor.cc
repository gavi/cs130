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
	Point a(10,10);
	Point b(20,30);
	Point c(1,1);

	a.print();
	b.print();
	c.print();


}
