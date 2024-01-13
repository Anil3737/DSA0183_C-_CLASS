# include <iostream>
using namespace std;
class shape
{
	float l,w,ar,pe;
    float p = 3.14,r,Ar,Pe;
    public:
    	void rectangle()
    	{
    		cout<<"****RECTANGLE****"<<endl;
    		cout<<"Enter Length::";
    		cin>>l;
    		cout<<"Enter width::";
    		cin>>w;
		}
		void circle()
		{
			cout<<"****CIRCLE****"<<endl;
			cout<<"Enter Radius::";
			cin>>r;
			
		}
		void caluclate()
		{
			ar = l * w;
			pe = 2*(l+w);
			Ar = p*(r*r);
			Pe = 2*(p*r);
		}
		void show()
		{
			cout<<"----Rectangle----"<<endl;
			cout<<"Area = "<<ar<<endl;
			cout<<"Perimeter = "<<pe<<endl;
			cout<<"----Circle----"<<endl;
			cout<<"Area = "<<Ar<<endl;
			cout<<"Perimeter = "<<Pe;
			
		}
};
int main()
{
	shape s;
	s.rectangle();
	s.circle();
	s.caluclate();
	s.show();
	return 0;
}
