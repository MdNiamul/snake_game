#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double f, c, k;

    //cout<<"Enter the number of farenheight : ";
    //cin>>f;

    cout<<"Enter the number of celcius : ";
    cin>>c;

     f = 180* c + 32;

     cout<<"Result of farenheight :: "<<f<<endl;

    k = c + 273;

    cout<<setw(20)<<"Result of kelvin celin :: "<<k;



    getch();
}