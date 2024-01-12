# include <iostream>
using namespace std;
class num
{
	int n,i,j;
	public:
		void input()
		{
			cout<<"Enter Number::";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<" * ";
				}
				cout<<"\n";
			}
			//cout<<"\n";
		}
};
int main()
{
	num h;
	h.input();
	return 0;
}
