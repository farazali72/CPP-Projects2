#include <iostream>
using namespace std;
int main(){
	int x;
	
	cout<<"Enter the number:";
	cin>>x;
	
	for(int i = 0;i<1; i++){
		if(x<=100){
			cout<<"Small";
		}
		else{
			cout<<"Big";
		}
		cout<<endl;
	}
return 0;
}