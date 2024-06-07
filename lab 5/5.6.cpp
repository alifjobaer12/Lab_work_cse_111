#include<iostream>
using namespace std;
class student
{
    int id[30];
    double cgpa[30];
    float mx=0,mn=0,a=0;
public:
    int input()
    {
        for (int i=0; i<30; i++)
        {
            cin>>id[i]>>cgpa[i];
        }
    }
    float avg()
    {
        for(int i=0; i<30; i++)
        {
            a+=cgpa[i];
        }
        return a/30;
    }
    float maximum()
    {
        for(int i=0; i<30; i++)
        {
            (cgpa[i]>cgpa[i+1])?mx=cgpa[i]:mx=mx;
        }
        return mx;
    }
    float minmum()
    {
        for(int i=0; i<30; i++)
        {
            (cgpa[i]<cgpa[i+1])?mn=cgpa[i]:mn=mn;
        }
        return mn;
    }
};
int main()
{
    student a;
    a.input();
    cout.precision(3);
    cout<<endl;
    cout<<"Maximum"<<endl<<a.maximum()<<endl;
    cout<<"Average"<<endl<<a.avg()<<endl;
    cout<<"Minmum"<<endl<<a.minmum()<<endl;
    return 0;
}
