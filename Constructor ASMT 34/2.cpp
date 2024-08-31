#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
    private:
        int customerId;
        char customerName[20]={0}, customerEmail[50]={0};
        long int customerMobileNum;
    
    public:
        Customer(int x, char n[], char e[], long int y)
        {
            customerId = x;
            strcpy(customerName, n);
            strcpy(customerEmail, e);
            customerMobileNum = y;
        }

        Customer()
        {
            cout <<endl <<"Enter these Customer Data:"<<endl;
            cout <<"Id: ";
            cin >>customerId;

            cin.ignore();
            cout <<"Name: ";
            cin.getline(customerName, 20);

            cout <<"Email: ";
            cin.getline(customerEmail, 50); 

            cout <<"Mobile Number: ";
            cin >>customerMobileNum;
        }


        void getCustomerData()
        {
            cout <<endl <<"Customer DATA:"<<endl;
            cout <<"Id: "<<customerId <<endl <<"Name: "<<customerName <<endl <<"Email: " <<customerEmail <<endl <<"Mobile Number: " <<customerMobileNum;
        }

};

int main()
{
    int cus_id;
    char cus_name[20]={0}, cus_email[50];
    long int mob_num;

    cout <<"Enter these Customer Data:"<<endl;
    cout <<"Id: ";
    cin >>cus_id;

    cin.ignore();
    cout <<"Name: ";
    cin.getline(cus_name, 20);

    cout <<"Email: ";
    cin.getline(cus_email, 50); 

    cout <<"Mobile Number: ";
    cin >>mob_num;
 
    Customer Cus1(cus_id, cus_name, cus_email, mob_num);
    Customer Cus2;

    Cus1.getCustomerData();
    cout <<endl;
    Cus2.getCustomerData();

    return 0;
}