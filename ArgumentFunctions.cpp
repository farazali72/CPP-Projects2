#include <iostream>
using namespace std;

int argumentFunction(int a, int b){
	return a+b;
}

int main(){
	int a = 3;
	int b = 7;
	
	cout<<"Sum is :"<<argumentFunction(a, b)<<endl;
	return 0;	
}