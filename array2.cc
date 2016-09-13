#include <iostream>
using namespace std;

void printArray(int arr[],int count){
	for(int i=0;i<count;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={1,2,3};
	printArray(arr,3);
	return EXIT_SUCCESS;
}


