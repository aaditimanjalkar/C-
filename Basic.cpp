#Some basic program in C++

#Sum of n natural no.
using namespace std;
int main()
{
	int n,sum=0;
	cout<<("Value of n: ")<<endl;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
	 sum=sum+i;
	}
	cout<<("sum of n natural no.:")<<sum;

}

#Average of three numbers
using namespace std;
int main ()
{
	int a,b,c,avg;
	cout<<"Enter the value of a: "<<endl;
	cin>>a;
	cout<<"Enter the value of b: "<<endl;
	cin>>b;
	cout<<"Enter the value of c: "<<endl;
	cin>>c;
	avg=(a+b+c)/3;
    cout<<"Average of three numbers :"<<avg;return 0;
}

#Reversing a string
#include<string.h>
using namespace std;
int main()
{
int i,n;
char str[20];
cout<<"Enter the String to get reversed: ";
cin>>str;;
n=strlen(str);
cout<<"\nReversed string is ";
for(i=n-1;i>=0;i--)
{
cout<<str[i];
}
return 0;
}

#To calculate the power
using namespace std;
int power(int n1, int n2);
int main() {
int base, a, result;
cout<<"Enter base number: ";
cin>>base;
cout<<"Enter power number(positive integer): ";
cin>>a;
result = power(base, a);
cout<<"Result: "<<result;
getch();
return 0;
}
int power(int base, int a) {
if (a != 0)
return (base * power(base, a - 1));
else
return 1;
}

#Addition of 2 matrix
using namespace std;
int main ()
{
   int m1[10][10],m2[10][10],add[10][10],r,c,i,j;
   cout<<"Enter the number of row: ";
   cin>>r;
   cout<<"Enter the number of column: ";
   cin>>c;
   cout<<"First matrix\n";
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
       cout<<"Enter the element: \n";
       cin>>m1[i][j];
     }
   }
   cout<<"Second matrix\n";
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     cout<<"Enter the element: \n";
     cin>>m2[i][j];
    }
  }
cout<<"ADDITION OF THE TWO MATRICES =\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
add[i][j]=m1[i][j]+m2[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<"\t"<<add[i][j];
}
cout<<"\n";
}
return 0;
getch();
}


using namespace std;
int main(){
int num;
int arr[25];
cout<<"Please enter total no. of elements[1 to 25]: ";
scanf("%d", &num);
for (int i = 0; i < num; ++i){
cout<<"Enter the number: ";
cin>>arr[i];
}
for (int i = 0; i < num; ++i){
if (arr[0] < arr[i]){
arr[0] = arr[i];
}
}
cout<<"Largest element of the array is:"<<arr[0];
return 0;
}

# * pattern
#include<iostream>
using namespace std;
int main ()
{
	int i,j,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}


#To demonstrate switch case
using namespace std;
int main ()
{
int n;
cout<<"Enter the month number: ";
cin>>n;
switch(n)
{
	    case 1:
		cout<<"Month is january"<<endl;
		break;
		case 2:
		cout<<"Month is february"<<endl;
		break;
		case 3:
		cout<<"Month is march"<<endl;
		break;
		case 4:
		cout<<"Month is april"<<endl;
		break;
		case 5:
		cout<<"Month is may"<<endl;
		break;
		case 6:
		cout<<"Month is june"<<endl;
		break;
		case 7:
		cout<<"Month is july"<<endl;
		break;
		case 8:
		cout<<"Month is august"<<endl;
		break;
		case 9:
		cout<<"Month is september"<<endl;
		break;
		case 10:
		cout<<"Month is ocotober"<<endl;
		break;
		case 11:
		cout<<"Month is november"<<endl;
		break;
		case 12:
		cout<<"Month is december"<<endl;
		break;
		default:
		cout<<"Invalid Input"<<endl;
		return 0;		
} 
}

#Palindrome or not
using namespace std;
int main ()
{
	char str[20];
	int i,length,temp=0,flag=0;
	cout<<"Enter a String: ";
	cin>>str;
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	{
		cout<<"ENTERED STRING IS A PALINDROME";
	}
	else
	{
		cout<<"ENTERED STRING IS NOT A PALINDROME";
	}
	return 0;
}

#Prime No. or not
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;
  if (n == 0 || n == 1) {
    is_prime = false;
  }
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}





#object-oriented concepts by creating class
using namespace std;
class student
{
 private:
 char name[30];
 int rollNo;
 int m1;
 int m2;
 int sum;
 float avg;
 public:
 void getDetails(void);
 void putDetails(void);
};
 void student::getDetails(void)
 {
 cout << "Enter name: " ;
 cin >> name;
 cout << "Enter roll number: ";
 cin >> rollNo;
 cout << "Enter marks of subject 1: ";
 cin >> m1;
 cout << "Enter marks of subject 2: ";
 cin >> m2;
 sum=m1+m2;
 avg=sum/2;
}

void student::putDetails(void)
{
 cout << "Student details:\n";
 cout << "Name:"<< name << "\nRoll Number:" << rollNo <<
"\nSubject 1 marks:" << m1 << "\nSubject 2 marks:" << m2 <<
"\nAverage:" << avg;
}

int main()
{
 cout << "Enter details of student " << ":\n";
 student s;
 s.getDetails();
 s.putDetails();
 return 0;
}


#creating a class using default parameters in constructor.
#include<iostream>
#include<string>
using namespace std;

class Circle 
{
	private:
		double radius;
		string color;
	public:
		Circle(double r=1.0, string c = "Red")
		{
			radius = r;
			color = c;
		}
		double getRadius()
		{

			return radius;
		}
		string getColor()
		{
			return color;
		}
		double getArea()
		{
			return radius*radius*3.1418;
		}
};

int main()
{
	Circle c1(1.2,"Black");
	cout<<"Radius = "<<c1.getRadius()<<" Area = "<<c1.getArea()<<" Color = "<<c1.getColor()<<endl;

    Circle c2(3.4);
	cout<<"Radius = "<<c2.getRadius()<<" Area = "<<c2.getArea()<<" Color = "<<c2.getColor()<<endl;
	
    Circle c3;
	cout<<"Radius = "<<c3.getRadius()<<" Area = "<<c3.getArea()<<" Color = "<<c3.getColor()<<endl;
	
	return 0;
	
}


#to initialize the values in the constructor, print the values in main method and then destroy the object using destructor.
#include<iostream>
using namespace std;
int count=0;
class Demo
{
    public:
        Demo()
        {
            cout<<"Constructor called"<<endl;
        }
         
        ~Demo()
        {
            cout<<"Destructor called"<<endl;  
        }
};
 
main()
{
    Demo d;
    return 0;
}


#perform multiple inheritance of two base classes to a derived class
using namespace std;
class Shape
{
    protected:
    int length,width;
    public:
    void getValue(int l,int w )
    {
        length=l;
        width=w;
    }
};
   class PaintCost{
       public:
       int getCost(int area){
           return area *70;
       }
   };
   class Rectangle:public Shape,public PaintCost{
       public:
       int getArea(){
           return( length*width);
       }
   };
int main()
{
    Rectangle rect;
    int area;
    rect.getValue(5,4);
    area=rect.getArea();
    cout<<"Total area:"<<rect.getArea()<<endl;
    cout<<"paintcost :"<<rect.getCost(area)<<endl;
    return 0;
}


#To demonstrate operator overloading using addition operator with different data types.
using namespace std;

class Complex 
{
   private:
    float real;
    float imag;
   public:
    Complex() : real(0), imag(0) {}
    void in() 
	{
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display()
	 {
        if (imag < 0)
            cout << "Sum of Complex number: " << real << imag << "i";
        else
            cout << "Sum of Complex number: " << real << "+" << imag << "i";
    }
};

int main() 
{
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.in();

    cout << "Enter second complex number:\n";
    complex2.in();
    result = complex1 + complex2;
    result.display();

    return 0;
}


#To demonstrate function overriding using virtual function.
using namespace std;

class Base
{
	 public: 
	  virtual void display()
	  {
	  	cout<<"Base class is called...!"<<endl;
	  }
};


class Derived : public Base
{
	public:
		void display()
		{
			cout<<"Dervied class is called...!"<<endl;
		}
};

int main(void)
{
	Base *bp =new Derived;
	bp -> display();
	return 0;
}


#to demonstrate abstraction
#include<iostream>
#include<string>
using namespace std;
class Shape
{
	public:
		virtual void getArea() = 0;
		void show()
		{
			cout << "Abstraction using pure virtual function" << endl;
		}
};


class Circle : public Shape
{
	public:
		void getArea()
		{
			cout<<"Enter circle radius: "<<endl;
			int r;
			cin>>r;
			cout<<"Area of the Cirle: "<<(3.14*r*r)<<endl;
		
		}
};

class Rectangle : public Shape
{
	public:
		void getArea()
		{
			int l,b;
			cout<<"Enter the lenght of rectangle: "<<endl;
			cin>>l;
			cout<<"Enter the breadth of rectangle: "<<endl;
			cin>>b;
			cout<<"Area of the Rectangle: "<<(l*b)<<endl;
		
		}
};
int main()
{
	Shape * a;
	Circle c1;
	a = &c1;
	a -> getArea();
	Rectangle r1;
	a = &r1;
	a -> getArea();
	
}




