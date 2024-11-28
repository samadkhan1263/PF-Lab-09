#include<iostream>
using namespace std;
int main()
{
int arr[3][4];
int sum =0;
for(int i=0;i<3;i++)
{
    for(int j=0; j<3;j++)
    {
 cout<<"Enter the value"<<i<<" AND "<<j;
 cin>>arr[i][j];

    }
}
for (int i=0; i<3;i++)
{
  for(int j=0;j<3;j++)
  {
   sum+=arr[i][j];

  }

}
cout<<"Sum is: "<<sum<<endl;
return 0;
}