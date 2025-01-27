#include <iostream>
using namespace std;

class BankAccount{

private:

    int AccountNumber;
    string AccountHolderName;
    int Balance;

public:
//constructor    
    BankAccount(int AccountNumber, string AccountHolderName, int Balance){

    this->AccountNumber = AccountNumber;
    this->AccountHolderName = AccountHolderName;
    this->Balance = Balance;

    }
//to deposit money
    void deposit(int d){

        if(d <= 0){
            cout << "[ Invalid deposit amount. Please enter a positive value. ]" << endl << endl;
            exit(0);//close program
        }
        else{

        Balance += d;
        cout<<"[ your amount is successfully deposited ]"<<endl<<endl;
        cout<<"Balance : "<<Balance<<endl<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;

        }

    }
//to withdraw money
    void withdraw(int w){

        if (w > Balance)
        {
            cout<<"[ Your account balance is insufficient to process this transaction ! ]"<<endl<<endl;
        }
        else{

            Balance -= w;
            cout<<"[ your amount is successfully withdrawal ]"<<endl<<endl;
            cout<<"Balance : "<<Balance<<endl<<endl;
        }

    }
//to check account details
    void getAccDetails(){

        cout<<"( Bank account details )"<<endl<<endl;  

        cout<<"Account number : "<<AccountNumber<<endl;
        cout<<"Account holder name : "<<AccountHolderName<<endl;
        cout<<"Balance : "<<Balance<<endl;     
       
    }    

};

int main(){

int depo = 0, with = 0;

    BankAccount Jethalal (1256, "Jethalal", 30000);
    BankAccount Bhide (1259, "Bhide", 4200);
    BankAccount Popatlal (1263, "Popatlal", 620);

    cout<<"----------------------------------------------------------"<<endl;
    cout<<"( Bank Accounts )"<<endl<<endl;
    cout<<"* Jethalal"<<endl<<"* Bhide"<<endl<<"* Popatlal"<<endl;
    cout<<"----------------------------------------------------------"<<endl;

//jethalal

    Jethalal.getAccDetails();

    cout<<"How much you want to deposit ? : ";
    cin>>depo;
    cout<<endl;

    Jethalal.deposit(depo);

    cout<<"How much you want to withdraw ? : ";
    cin>>with;
    cout<<endl;

    Jethalal.withdraw(with);


//bhide

    cout<<"----------------------------------------------------------"<<endl;

    Bhide.getAccDetails();

    cout<<"How much you want to deposit ? : ";
    cin>>depo;
    cout<<endl;

    Bhide.deposit(depo);

    cout<<"How much you want to withdraw ? : ";
    cin>>with;
    cout<<endl;

    Bhide.withdraw(with);

//popatlal

    cout<<"----------------------------------------------------------"<<endl;

    Popatlal.getAccDetails();

    cout<<"How much you want to deposit ? : ";
    cin>>depo;
    cout<<endl;

    Popatlal.deposit(depo);

    cout<<"How much you want to withdraw ? : ";
    cin>>with;
    cout<<endl;

    Popatlal.withdraw(with);

}