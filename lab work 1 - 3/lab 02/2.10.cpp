#include <iostream>
using namespace std;
int main()
{
    int arr1[100];
    int i, max, min, n;
    cin>>n;
    for (i = 0; i < n; i++)
    {
 cin>>arr1[i];
    }
    max = arr1[0];
    min = arr1[0];
    for (i = 1; i < n; i++)
    {
        if (arr1[i] > max)
        {
            max = arr1[i];
        }
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    cout<<"Maximum : "<< max<<endl;
    cout<<"Minimum "<< min<<endl;
    return 0;
}
