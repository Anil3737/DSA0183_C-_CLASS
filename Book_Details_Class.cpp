#include<iostream>
using namespace std;
class stu
{
                private:
                    char name[20],add[20],roll[100];
                        int zip;

                public:
                    stu ();
                        ~stu();
                        void read();
                        void disp();
};
stu :: stu()
{
        cout<<"\nThis is Book Details..........."<<endl;
}
void stu :: read()
{
        cout<<"\nEnter Book Name :: ";
        cin>>roll;
        cout<<"\nEnter Auther Name :: ";
        cin>>name;
        cout<<"\nEnter Cost :: ";
        cin>>add;
       // cout<<"\nEnter marks  :: ";
        //cin>>zip;
}
void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nBook Name :: "<<roll<<endl;
        cout<<"\nAuther name :: "<<name<<endl;
        cout<<"\nBook Cost :: "<<add<<endl;
        //cout<<"\nMarks is :: "<<zip;
}
stu :: ~stu()
{
        cout<<"\n\nBook Detail is Closed.............\n";
}
int main()
{
        stu s;
    s.read ();
    s.disp ();

    return 0;
}
