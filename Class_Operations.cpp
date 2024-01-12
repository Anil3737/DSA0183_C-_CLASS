# include <iostream>
using namespace std;
class maths
{
	int a,b,sum,sub,div,mul;
	public:
		void enter()
		{
			cout<<"Enter Two Numbers::";
			cin>> a >> b;
			sum = a + b;
			sub = a - b;
			div = a / b;
			mul = a * b;
			
		}
		void output()
		{
			cout<<"Sum = "<<sum<<endl;
			cout<<"Subtraction = "<<sub<<endl;
			cout<<"Division = "<<div<<endl;
			cout<<"Multiplication = "<<mul<<endl;
		}
};
int main()
{
	maths m;
	 m.enter();
	 m.output();
	 return 0 ;
	 
}
