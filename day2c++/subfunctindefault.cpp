#include<iostream>
using namespace std;
void sub(int x=4,int y=5)
{
	int c=x-y;
	cout<<c<<endl;
}
int main(){
	sub(2,3);
	sub();
	sub(6);
}
