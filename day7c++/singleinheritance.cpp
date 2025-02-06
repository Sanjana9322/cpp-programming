#include<iostream>
using namespace std;
class one{
	public:
	int a;
	void set(){
		a=5;
	}
	void display()
	{
		cout<<a<<endl;
	}
};
class two:public one{
	public:
		int b;
		void set1()
		{
			b=4;
		}
		void display1()
		{
			cout<<b<<endl;
		}
};
int main(){
	two ob1;
	ob1.set();
	ob1.display();
	ob1.set1();
	ob1.display1();
}
