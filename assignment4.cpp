#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    int rows;
    cout<<"Enter the number of rows:";
    cin>>rows;
    
    for(int i=0;i<rows; i++)
    {
        int num = 1;
        for (int j=1;j<(rows-i);j++)
        {
            cout<<"  ";
        }
        for (int k=0;k<=i;k++)
        {
            cout<<setw(4)<<num;
            num =num*(i - k)/(k + 1);
        }
        cout<<endl<<endl;
    }
    cout<<endl;
    return 0;
}
























