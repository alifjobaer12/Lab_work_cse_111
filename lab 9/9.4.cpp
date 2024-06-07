#include<iostream>
using namespace std;
class employee
{
    int sallary;
public:
    void work() {
        cout << "Employee is working." << endl;
    }
    int getSalary() {
        cin>>sallary;
        cout<<"salary "<<sallary<<endl;
        return 0;
    }
};
class HRManager : public employee
{
   public:
        void work() {
        cout << "HR Manager is managing human resources." << endl;
    }
       void addEmployee() {
        cout << "HR Manager is adding a new employee." << endl;
    }
};
int main() {
    employee emp;
    emp.getSalary();
    emp.work();
    HRManager hrManager;
    hrManager.work();
    hrManager.addEmployee();
    return 0;
}
