#include<iostream>
using namespace std;

class summation
{
    int number1, number2;
public :
    summation(int n1, int n2)
    {
        number1=n1;
        number2=n2;
    }
    int calculate()
    {
        return number1+number2;
    }
};

int main()
{

    int a,b;
    cin>>a>>b;
    summation obj(a,b);
    cout<<"The sum: "<<obj.calculate()<<endl;

    return 0;
}

