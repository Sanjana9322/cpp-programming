#include<iostream>
using namespace std;
class one{
	public:
		int a;
};
class two{
	public:
		int b;
};
class three:public one,two{
	public:
		int c;
		void set()
		{
			a=5;
			b=4;
			c=6;
		}
		void display(){
			cout<<a<<endl<<b<<c;
		}
};
int main(){
	three ob1;
	ob1.set();
	ob1.display();
}

