# include <iostream>
using namespace std;
class add
{
	private:
		int a,b,s=0;
		float n1,n2,sum=0;
		public:
			void in()
			{ cout<<"----------Enter Integers Values----------::"<<endl;
				cout<<"Enter Value Of a::";
				cin>>a;
				cout<<"Enter Value Of b::";
				cin>>b;
			}
			void in_ad()
			{
				s = a + b;
				cout<<"Sum Of Integers::"<<s<<endl;	
			}
			void flo()
			{
				cout<<"-----------Enter Float Value---------::"<<endl;
				cout<<"Enter Value Of n1::";
				cin>>n1;
				cout<<"Enter Value Of n2::";
				cin>>n2;
			}
			void flo_add()
			{
				sum = n1 + n2;
				cout<<"Sum Of Floats values::"<<sum<<endl;
			}
};
int main()
{
	add c;
	c.in();
	c.flo();
	c.in_ad();
	c.flo_add();
	return 0;
}
