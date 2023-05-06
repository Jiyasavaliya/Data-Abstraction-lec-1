#include<iostream>
#include<string.h>
using namespace std;

class Admin{
	
   protected :
   	
  int total_staff ;
  int total_annual_revenue;

   public:

   void myAccess()(int t, int T){
   	
	total_staff=t;
   	total_annual_revenue=T;
   }  
	
	void get(){
		
	cout<<total_staff<<endl;
   	cout<<total_annual_revenue<<endl;
	
	}
	
};
class Manager : public Admin{

	   protected :
   	
  int manager_salary;
  int employee_salary;

   public:

   void myAccess()(int m, int e){
   	
	manager_salary=m;
   	employee_salary=e;
   }  
	
	void get(){
		
	cout<<manager_salary<<endl;
   	cout<<employee_salary<<endl;
	
	}
};
	class Employee : public Manager{

	   protected :
   	
  char company_name[12];
  

   public:

   void myAccess()(char c[]){
   	
	strcpy(company_name,c);
   	}  
	
	void get(){
		
	cout<<company_name<<endl;
   	
	}
	
};

int main(){
	
	Admin obj;
	Manager obj1;
	Employee obj2;
	
	obj.myAccess()(10000,19);
	obj.get();
	
	obj1.myAccess()(30000,20000);
	obj1.get();
	
	obj2.myAccess()("jio");
	obj2.get();
}