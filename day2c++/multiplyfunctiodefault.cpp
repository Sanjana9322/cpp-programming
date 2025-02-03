#include<iostream>
using namespace std;
void mul(int x=4,int y=5)
{
	int c=x*y;
	cout<<c<<endl;
}
int main(){
	mul(2,3);
	mul();
	mul(6);
}
