#include<iostream>
using namespace std;

class sum{
	public :
		int a,b;
	public :
		sum(){
			cout<<"enter a : ";
			cin>>a;
			cout<<"enter b : ";
			cin>>b;
			cout<<"the sum is : "<<a+b<<endl;
		}
		
};

main(){
	sum s;
}
