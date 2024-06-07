#include<iostream>
using namespace std;

class date
{
    int d,m,y;
public:
    void set_data()
    {
        cin>>d>>m>>y;
    }
    int day()
    {
        if(m%2==0&&m<8)
            {if (d>0 && 30>d)
                return d;}
        if(m%2!=0&&m>8)
        {
            if (d>0 && 30>d)
                return d;
        }
        else if (m==2)
        {
            if(d>0&&28>d)
                return d;
        }
        else if(m%2!=0&&m<8)
        {
            if(d>0&&d<31)
               return d;
        }
        else
        {
            cout<<"Date not valid. Enter again "<<endl;
            cin>>d;
        }
return 0;
    }
    int month()
    {
        if(m>0 && m<13)
        {
            return m;
        }
        else
        {
            cout<<"Month not valid. Enter again "<<endl;
            cin>>m;
        }
    }
    int year()
    {
        return y;

    }
    void get_data()
    {
        cout<<"Date You Enter Is Valid"<<endl;
       cout<<"Day "<<day()<<endl<<"Month "<<month()<<endl<<"Year "<<y<<endl;
    }
};
int main()
{
    date a;
    a.set_data();
    a.get_data();

    return 0;
}
