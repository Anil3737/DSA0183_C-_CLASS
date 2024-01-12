#include<iostream>
#include<stdio.h>
#include<string.h> 
using namespace std;
class T4Tutorials
{
        int acno;
        char AccountHolderName[100], Account_Type[100];
        float bal;  
   public:
        T4Tutorials(int acc_no, char *name, char *acc_type, float Balance)  
        {
                acno=acc_no;
                strcpy(AccountHolderName, name);
                strcpy(Account_Type, acc_type);
                bal=Balance;
        }
        void deposit();
        void withdraw();
        void Show();
};
void T4Tutorials::deposit()  
{
        int DepositAmmount1;
        cout<<" Enter Deposit Amount = "<<endl;
        cin>>DepositAmmount1;
        bal+=DepositAmmount1;
}
void T4Tutorials::withdraw()  //withdrawing an amount
{
        int WithdrawAmmount1;
        cout<<" Enter Withdraw Amount = "<<endl;
        cin>>WithdrawAmmount1;
        if(WithdrawAmmount1>bal)
                cout<<" Cannot Withdraw Amount"<<endl;
        bal-=WithdrawAmmount1;
}
void T4Tutorials::Show()  //Showing the details
{
        cout<<" *************"<<endl;
        cout<<" Accout No. : "<<acno<<endl;
        cout<<" Name : "<<AccountHolderName<<endl;
        cout<<" Account Type : "<<Account_Type<<endl;
        cout<<" Balance : "<<bal<<endl;  
}	
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float Balance;
        cout<<" Enter Details: "<<endl;
        cout<<"***********"<<endl;
        cout<<" Accout No. "<<endl;
        cin>>acc_no;
        cout<<" Name : "<<endl;
        cin>>name;
        cout<<" Account Type : "<<endl;
        cin>>acc_type;
        cout<<" Balance : "<<endl;
        cin>>Balance;
  
        T4Tutorials b1(acc_no, name, acc_type, Balance);  //object is created
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.Show(); //
        return 0;
}
