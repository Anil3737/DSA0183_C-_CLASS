# include <iostream>
using namespace std;
class fact
{
	private:
		int n,f=1,i;
		float a,fa=1,j;
		public:
			void number()
			{
				cout<<"Enter Number::"<<endl;
				cin>>n;
				
			}
			void floating()
			{
				cout<<"Enter Floating Number::"<<endl;
				cin>>a;
			}
			void cal_num()
			{
				for(i=1;i<=n;i++)
				{
					f *= i;
				}
			}
			void cla_floa()
			{
				for(j=1;j<=fa;j++)
				{
					 fa *= j; 
				}
			}
			void output()
			{
				cout<<" Integer Factorial ::"<<f<<endl;
				cout<<"Float Factorial::"<<fa<<endl;
			}
};
int main()
{
	fact f;
	f.number();
	f.floating();
	f.cal_num();
	f.cla_floa();
	f.output();
	return 0;
}
