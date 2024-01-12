# include <iostream>
using namespace std;
class comp
{
	int num1,num2;
	public:
		void input()
		{
			cout<<"Enter First Number::";
			cin>>num1;
			cout<<"Enter Second Number::";
			cin>>num2;	
		}
		void compare()
		{
			if (num1 == num2)
			{
				cout<<"Two Number Equal::"<<num1;
				
			}
			else
			{
				cout << "Numbers NOT Equal::"<<num1;
			}
		}
		
};
int main()
{
	comp c;
	c.input();
	c.compare();
	return 0;
}
