#include<string.h>
#include<iostream>
using namespace std;
class one{
	public:
		char*name;
		one(const char*input)
		{
			int len=strlen(input)+1;
			name=new char[len];
			strcpy(name,input);
		}
		void display(){
			cout<<name<<endl;
		}
		~one()
		{
			delete name;
			cout<<"dectorctor called";
		}
};
int main()
{
	one ob1("sanjana");
	ob1.display();
	
}
