#include<iostream>
const double pi = 3.14;
using namespace std;
int area(int);
int area (int, int);
float area (float);
void display (int k)
{
 cout<<"\n\n\n The area is "<< k;
}
int main ()
{
 int a=4, c=6, d=8;
 float r=3.5, s=4.2, t=3.1;
 area(a);//calling area (int p)

area (c, d); //calling area (int q, int r)
 area(r);//calling area (float m)
}
int area (int p)
{
 int x;
 x=p*p;
 display(x);
}

int area (int q, int r)
{
int x;
x=q*r;
display(x);
}

float area (float m)
{
int x;
x=pi*m*m;
display(x);
}