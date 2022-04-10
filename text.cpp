/*#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "--\n";
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++)
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
*/


/*#include<iostream>
using namespace std;

int main()
{
    int amount;

    int  note100, note500;

     note100 = note500 = 0;

    cout << "Enter amount: "<<endl;
    cin >> amount;

    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }

    cout << "Total number of notes" <<endl;
    cout << "500 = " << note500 <<endl;
    cout << "100 = " << note100 <<endl;


    return 0;

}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout<<"enter three angle of a triangle"<<endl;
	cin>>a>>b>>c;
	int  sum=a+b+c;
	if(sum==180 && a!=0 && b!=0 && c!=0)
	{
	cout<<"the triangle is valid"<<endl;
}
else
{
cout<<"the triangle is not valid"<<endl;
}

}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	int side1, side2, side3;

	cout << "\nPlease Enter Three Sides of a Triangle =  ";
	cin >> side1 >> side2 >> side3;

	if(side1 == side2 && side2 == side3)
  	{
  		cout << "\nThis is an Equilateral Triangle";
  	}
  	else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
  		cout << "\nThis is an Isosceles Triangle";
	}
  	else
    	cout << "\nThis is a Scalene Triangle";

 	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int phy,chem,bio,maths,comp;
	int total;
	float percent;
	cout<<"Enter marks of computer";
	cin>>phy;
	cout<<"enter marks of English";
	cin>>chem;
	cout<<"enter marks of bio";
	cin>>bio;
	cout<<"enter marks of maths";
	cin>>maths;
	cout<<"enter marks of physics";
	cin>>comp;
	total= phy+chem+bio+maths+comp;
	percent=total/5.0;
	if(percent>=90)
	{
		cout<<"Grade=A";
	}
	else if(percent>=80)
	{
		cout<<"Grade=B";
	}
	else if(percent>=70)
	{
		cout<<"Grade=C";
	}
	else if(percent>=60)
	{
		cout<<"Grade=D";
	}
	else if(percent>=40)
	{
		cout<<"Grade=E";
	}
	else
	{
		cout<<"Gread F";
	}
}
*/


/*
#include<iostream>
using namespace std;

int main()
{
    int arr [7]={25,63,74,52,34,55,21};
    for(int=0;i<7;i++)
    {
        cout<<arr[i]<<"";
    }
}
*/
/*
#include<iostream>
using namespace std;

int marks[10];
{
    int arr[7]={25,63,74,52,34,55,21};
    //for(int=0;i<7;i++)
    for(int i=0;i<10;i++)
        cin>>marks[i];
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0, pro = 1;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        pro *= arr[i];
    }
    cout << "\nSum of array elements : " << sum;
    cout << "\nProduct of array elements : " << pro;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;

  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
*/
/*
#include<iostream>

using namespace std;
int main()
{
   int arr[10], i;
   cout<<"Enter 10 numbers: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   cout<<"\nList of Odd Numbers are:\n";
   for(i=0; i<10; i++)
   {
      if(arr[i]%2!=0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "\nSum of array elements : " << sum;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;


  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }


  for(i = 1;i < n; ++i) {

    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[7]={25,5,6,78,4,5,6,7};
    int arr[2][3]={{24,45,46},{69,89,65}};
    int arr[2][3]={25,44,56,7,8,65};
}
*/
/*
#include<iostream>
using namespace std;
int main(){
int arr[5][2] = {{2,2},
                 {5,8},
                 {4,3},
                 {2,2},
                 {4,3}
                 };


for(int i=0;i<5;i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}
*/
/*
#include<iostream>
using namespace std;
main( )
{
      int  s[2][2];
      int  i, j;
      cout<<"\n2D Array Input:\n";
      for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
        {
            cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>s[i][j];
        }
      }

      cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<s[i][j];
        }
        cout<<endl;
      }
}
*/
/*
#include <iostream>
using namespace std;
int main() {
   int i,n,sum=0;
   int arr[]={1,2,3,4,5};
   n=5;
   for(i=0;i<n;i++) {
      sum+=arr[i];
   }
   cout<<sum;
   return 0;
}
*/
/*
#include<iostream>

using namespace std;

int main()
{
    int a[5][5],big1=1,n,m,i,j;
    cout<<"Enter no of rows and columns(max 5):";
    cin>>m>>n;
    cout<<"Enter the array:\n";

    for(i=0;i<m;i++)
        for(j=0;j<n;++j)
            cin>>a[i][j];

    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        {
            if(a[i][j]>big1)
                big1=a[i][j];
        }

    for(i=0;i<m;++i)
        for(j=0;j<n;++j)


    cout<<"\nLargest number:"<<big1;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,pos=0,neg=0;

 cout<<"Enter The Size of An Array :\n";
  cin>>n;

  cout<<"Enter The Element :\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }

  cout<<"Elment in Array is Given Below\n";
  for(i=0;i<n;i++)
  {
   if(a[i]>0)
   pos++;
   else if(a[i]<0)
   neg++;

  }
  cout<<"\nPositive No. is = "<<pos;
  cout<<"\nNegative No. is = "<<neg;

 return 0;

}
*/





//POINTER

// int p, *ptr //declare variable p and pointer variable ptr
//p=4;         //asssign value 4 to variable p
//ptr=&p;      //assign address of p to pointer variable ptr
//*ptr = show to value

//c++ program to illustrate pointers in c++
/*
#include <bits/stdc++.h>
using namespace std;
void geeks(){
    int var =20
    //declare pointer variable
    int *ptr;
    //note that data type of ptr and var must be same
    ptr=&var;
    //assign the address of vaiable to the pointer
    cout<<"value at ptr ="<<ptr<<"\n";
    cout<<"value at var ="<<var<<"\n";
    cout<<"value at *ptr ="<<*ptr<<"\n";
    //driver program
    int main()
{
    geeks();
}
*/
/*
//POINTER ARITHMETIC
incremented (++)
decremented (--)
an integer may be added to apointer (+ or +=)
an integer may be subtracted to apointer (- or -=)

*/











//FUNCTIONS!!!
/*1= main()
to declare a function return_type function_name(p1,p2,p3..)
syntax to declare
return_type function_name (parameter list/p1,p2,p3)
{
    body of function
}

//different part of funtion
return type
function name
parameter
funtion body

funtion maxx between two number (int max is function)
int max (int num1,int num2)
{int result;
if (num1>num2)
    result=num1;
else;
result=num2;
}

//calling a function!!!
#include <iostream>
void greet(){
//code
}
int main(){
...
greet();
...
}

#include <iostream>
using namespace std;
//functon declaration and prototype
int max(int num1,int num2);
int main(){
//local varaiable declaratin;
int a=100;
int b=200;
int ret;
//calling a function to get max value
ret = max(a,b);
cout<<"max value is :"<<ret<<endl;
return0;
//function returning to max between two number
int max (int num1,int num2){
//local variable declaration
int result;
 if (num1>num2)
    result=num1;
    else
    result=num2;

    return result;
}

//function OVERloading!!
define as two or more function with same name..

//same name different arguments
int test(){}
int test(int a){}
int test(double a){}
int test(int a,double b){}

two types of parameter actual and formal parameter !!

*/


/*
#include <iostream>
using namespace std;

void greet(){
    cout <,"hello there";
}
int main(){

    greet();

    return 0;
}
*/


//function with parameters
//program to print a text

/*
#include <iostream>
using namespace std;
 void displaynum (int n1, float n2){
 cout <<"the int number is "<<n1;
 cout <,"the double number is "<<n2;
 }
int main (){
    int num1=5;
    double num2 = 5.5;

    displaynum(num1,num2);
    return 0;
    }
    */




/*
//program to add two number using a function
return statement
#include <iostream>

using namespace std;

//delacring a function
int add (int a, in b){
return (a+b);
}
int main (){
int sum;
sum =add(100,78);
cout<<"100+78="<<sum<<end1;
return0;
}
*/




/*
function prototype
//using function definition after main() function
//function prototype is declared before main()
#include <iostream>
using namespace std;
//function prototype
int add(int ,int);

int main(){
    int sum;
    //calling the function and storing
    //the returned value in sum
    sum =add(100,78);
    cout<<"100+78="<<sum<<end1;
    return 0;
    }
*/


/*
inline function
#include <iostream>
using namespace std;

inline void displayNum(int num){
    cout<<num<<endl;
}
int main(){
//first function call
displayNum(5);
//second function call
displayNum(8);
//third function call
displayNum(666);
return 0;
}
*/



/*
OVERLOADING
#include <iostream>
using namespace std;
//function with 2 parameters
void display (int var1, double var2)
{
    cout<<"integer number:"<<var1;
    cout<<"and double number :"<<var2<<endl;

}
//function with double type single parameter
void display (double var)
{
    cout<<"double number:"<<var<,endl;

}
//function with int type single parameter
void display (int var)
{
    cout<<"integer number:"<<var<<endl;

}
int main()
{
    int a=5;
    double b=5.5;

    display(a);

    display(b);

    display(a,b);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

    void g(){
        cout<<"good morning";
    }
int main(){
    g();

}
*/
/*
#include <iostream>
using namespace std;

    int g(){
        cout<<"good morning";

        return 0;
    }
int main(){
   int g();

}
*/



/*
call by value
#include <iostream.h>
#include<conio.h>
void swap (int n1,int n2)
{
    int temp;
    temp=*y;
    *x=*y;
    *y=temp;

}
void main()
{
    int x=25 ,y=50;
    swap(x,y);
    cout<<"the valu of x:"<<x;
    cout<<"the valu of x:"<<y;
    getch();
}
*/

//call by refrence
#include <iostream>
#include <conio.h>
void swap (int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

}
void main()
{
    int a=25 ,b=50;
    clrscr();

    swap(a,b);
    cout<<"the value of x:"<<x;
    cout<<"the value of x:"<<y;
    getch();
}

