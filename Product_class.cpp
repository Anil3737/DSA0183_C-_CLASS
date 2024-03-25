#include <iostream>
#include <string>
using namespace std;
class Product 
{
        private:
            string name;
            int price;

       public:
       Product() {}
       void get_p() 
    	{
    		cout<<"Enter product name: ";
            cin>>name;
            cout << "Enter product price: ";
            cin>>price;
        }
    void d_p() 
	{
        cout << "Product: " << name << ", Price: Rs" << price << endl;
    }
};

int main() 
{
     int  arr;
    cout<<"Enter No.of Products::";
    cin>>arr;
   Product products[arr];
    for (int i = 0; i < arr; ++i) {
        cout << "Enter details for Product " << i + 1 << ":" << endl;
        products[i].get_p();
    }
    cout << "\nProduct Details:" << endl;
    for (int i = 0; i < arr; ++i)
	{
        cout<<"Product " << i + 1 << ":" << endl;
        products[i].d_p();
    }
    return 0;
}

