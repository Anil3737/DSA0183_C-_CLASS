# include <iostream>
# include <string>
using namespace std;
class num
{
	private:
		int a,b;
		float c,d;
		string str,ch;
		public:
			void number()
			{
				cout<<"Enter Two Integers Number::";
				cin>>a >>b;
			}
			void floating()
			{
				cout<<"Enter Two Float Numbers::"<<endl;
				cin>>c>>d;
			}
			void charecter()
			
			{
				cout<<"Enter Two Charecter::"<<endl;
				cin>>ch>>str;
			}
			void ouput()
			{
				if(a > b)
				cout<<a <<"::is Greater "<<endl;
				else
				cout<<b<<"::Is Greater"<<endl;
					if(c > d)
				cout<<c<<"::Is Greater"<<endl;
				else
				cout<<d<<"::Is Greater"<<endl;if(str > ch)
				cout<<str<<"::Is Greater";
				else
				cout<<ch<<"::Is Greater";
			}
		
};
int main()
{
	num n;
	n.number();
	n.floating();
	n.charecter();
	n.ouput();
	return 0;
}
