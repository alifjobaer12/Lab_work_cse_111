#include<iostream>
using namespace std;
void prime(int l, int h)
{

    for( int l ; l<=h ; l++ )
    {
        bool pr=true;
        if (l == 0 || l == 1)
        {
            pr=false;
        }
        for( int j=2 ; j<=l/2 ; j++ )
        {
            if(l%j==0)
            {
                pr=false;

                break;
            }
        }
        if(pr)
            cout<<l<<" , ";
    }
     cout<<endl;
}

int main()
{
    int a, b ;
    cout<< "enter the low to highest numbers: ";
    cin>>a>>b;
    prime(a,b);

    return 0;
}
