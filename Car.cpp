#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class car
{
 // private:
       string name, model;
       float year;
  public:
       car()
	   {
            name=model="NULL";
            year=0;  
       }
       void input()
	   {
            cout<<"Enter Car Name:";
            cin>>name;
            cout<<"Enter Car Model:";
            cin>>model;
            cout<<"Enter year:";
            cin>>year;
       }
       void display()
	   {
            cout<<" "<<name<<" "<<model<<" "<<year;
       }
};
int main()
{
  car c1;
  c1.input();
  c1.display();
  getch();
  return 0;
}
