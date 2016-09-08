#include <iostream>
using namespace std;

int main(){
	enum DAY {SUN,MON,TUE,WED,THU,FRI,SAT};
	enum STATUS {GOOD=1, BAD=0};
	DAY today=THU;
	STATUS work=GOOD;	
	return EXIT_SUCCESS;
}
