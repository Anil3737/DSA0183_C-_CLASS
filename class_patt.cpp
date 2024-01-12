# include <iostream>
using namespace std;
class pattern
{
	int n,i,j;
	public:
		void input()
		{
			cout<<"Enter Number::";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=2*n-i;j++)
				{
					cout<<" * ";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	pattern p;
	p.input();
	return 0;
}
