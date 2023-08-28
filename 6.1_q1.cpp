#include<iostream>
using namespace std;

class Admin{
	protected:
		string company_name;
		double manager_salary;
		double employee_salary;
		double total_staff;
		double total_annual_revenue;
		int can_terminate;
	
};

class Manager : public Admin{
	public:
		myAccess()
		{
			cout << "Enter Company Name : ";
			cin >> company_name;
			cout << "Enter Manager Salary : ";
			cin >> manager_salary;
			cout << "Enter Employee Salary : ";
			cin >> employee_salary;
			cout << "Enter Total Number of Staff : ";
			cin >> total_staff;
			cout << "Enter Total Annual Revenue : ";
			cin >> total_annual_revenue;
			cout << "Enter Candidate Terminate : ";
			cin >> can_terminate;
			cout << endl;
			
		}
	
};

class Employee : public Manager{
	public:
		myAccess()
		{
			cout << endl;
			cout << "Company Name : " << company_name << endl;
			cout << "Manager Salary : " << manager_salary << endl;
			cout << "Employee Salary : " <<  employee_salary << endl;
			cout << "Total Number of Staff : " << total_staff << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
			cout << "Candidate Terminate : " << can_terminate << endl;
			
		}
};

int main()
{
	Employee a1;
	
	a1.Manager::myAccess();
	a1.myAccess();
	
	return 0;
}

