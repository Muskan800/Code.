#include<iostream>
#include<string>
using namespace std;
class calculator
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		double add(double a,double b)
		{
			return a+b;
		}
		int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	calculator c1;
	int s=c1.add(2.6,4.1,4);
	cout<<"Addition of numbers:"<<s;
}





