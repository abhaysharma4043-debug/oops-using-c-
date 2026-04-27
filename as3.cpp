// ================= PROGRAM 41 =================
// Virtual Destructor
#include<iostream>
using namespace std;
class Base{
public:
    virtual ~Base(){ cout<<"Base Destructor "; }
};
class Derived: public Base{
public:
    ~Derived(){ cout<<"Derived Destructor"; }
};
int main(){
    Base *b = new Derived();
    delete b;
}

// ================= PROGRAM 42 =================
// Base Class Pointer
#include<iostream>
using namespace std;
class A{
public:
    virtual void show(){ cout<<"A"; }
};
class B: public A{
public:
    void show(){ cout<<"B"; }
};
int main(){
    A *p;
    B obj;
    p=&obj;
    p->show();
}

// ================= PROGRAM 43 =================
// Early Binding
#include<iostream>
using namespace std;
class A{
public:
    void show(){ cout<<"Early Binding"; }
};
int main(){
    A obj;
    obj.show();
}

// ================= PROGRAM 44 =================
// Late Binding
#include<iostream>
using namespace std;
class A{
public:
    virtual void show(){ cout<<"Base"; }
};
class B: public A{
public:
    void show(){ cout<<"Late Binding"; }
};
int main(){
    A *p = new B();
    p->show();
}

// ================= PROGRAM 45 =================
// Student Result System
#include<iostream>
using namespace std;
class Student{
    int m1,m2,m3;
public:
    void input(){ cin>>m1>>m2>>m3; }
    void result(){ cout<<(m1+m2+m3)/3; }
};
int main(){
    Student s;
    s.input();
    s.result();
}

// ================= PROGRAM 46 =================
// Bank System
#include<iostream>
using namespace std;
class Bank{
    int bal;
public:
    Bank(){ bal=0; }
    void deposit(int x){ bal+=x; }
    void show(){ cout<<bal; }
};
int main(){
    Bank b;
    b.deposit(1000);
    b.show();
}

// ================= PROGRAM 47 =================
// Employee Salary
#include<iostream>
using namespace std;
class Emp{
    int salary;
public:
    void set(int s){ salary=s; }
    void show(){ cout<<salary; }
};
int main(){
    Emp e;
    e.set(5000);
    e.show();
}

// ================= PROGRAM 48 =================
// Library System
#include<iostream>
using namespace std;
class Book{
    string name;
public:
    void set(string n){ name=n; }
    void show(){ cout<<name; }
};
int main(){
    Book b;
    b.set("C++");
    b.show();
}

// ================= PROGRAM 49 =================
// Calculator
#include<iostream>
using namespace std;
class Calc{
public:
    int add(int a,int b){ return a+b; }
};
int main(){
    Calc c;
    cout<<c.add(5,3);
}

// ================= PROGRAM 50 =================
// Matrix Addition
#include<iostream>
using namespace std;
int main(){
    int a[2][2]={{1,2},{3,4}}, b[2][2]={{5,6},{7,8}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
}

// ================= PROGRAM 51 =================
// Matrix Multiplication
#include<iostream>
using namespace std;
int main(){
    int a[2][2]={{1,2},{3,4}}, b[2][2]={{5,6},{7,8}}, c[2][2]={0};
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    for(int k=0;k<2;k++)
        c[i][j]+=a[i][k]*b[k][j];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}

// ================= PROGRAM 52 =================
// Complex Number Add
#include<iostream>
using namespace std;
class Complex{
public:
    int r,i;
    Complex(int a,int b){ r=a;i=b; }
    Complex add(Complex o){
        return Complex(r+o.r, i+o.i);
    }
    void show(){ cout<<r<<"+"<<i<<"i"; }
};
int main(){
    Complex c1(1,2), c2(3,4);
    Complex c3=c1.add(c2);
    c3.show();
}

// ================= PROGRAM 53 =================
// Time Addition
#include<iostream>
using namespace std;
class Time{
public:
    int h,m;
    void add(Time t){
        m+=t.m;
        h+=t.h + m/60;
        m%=60;
    }
    void show(){ cout<<h<<":"<<m; }
};
int main(){
    Time t1={1,50}, t2={2,20};
    t1.add(t2);
    t1.show();
}

// ================= PROGRAM 54 =================
// Rectangle Area
#include<iostream>
using namespace std;
class Rect{
public:
    int l,b;
    int area(){ return l*b; }
};
int main(){
    Rect r;
    r.l=5; r.b=4;
    cout<<r.area();
}

// ================= PROGRAM 55 =================
// Circle Area
#include<iostream>
using namespace std;
class Circle{
public:
    float r;
    float area(){ return 3.14*r*r; }
};
int main(){
    Circle c;
    c.r=3;
    cout<<c.area();
}

// ================= PROGRAM 56 =================
// Shape Inheritance
#include<iostream>
using namespace std;
class Shape{
public:
    virtual void area(){ cout<<"Shape"; }
};
class Square: public Shape{
public:
    void area(){ cout<<"Square"; }
};
int main(){
    Shape *s = new Square();
    s->area();
}

// ================= PROGRAM 57 =================
// Vehicle Hierarchy
#include<iostream>
using namespace std;
class Vehicle{
public:
    void start(){ cout<<"Start"; }
};
class Car: public Vehicle{};
int main(){
    Car c;
    c.start();
}

// ================= PROGRAM 58 =================
// Person-Student
#include<iostream>
using namespace std;
class Person{
public:
    string name;
};
class Student: public Person{
public:
    void show(){ cout<<name; }
};
int main(){
    Student s;
    s.name="Abhay";
    s.show();
}

// ================= PROGRAM 59 =================
// Multiple Inheritance Staff
#include<iostream>
using namespace std;
class Teacher{ public: void t(){ cout<<"Teach "; } };
class Staff{ public: void s(){ cout<<"Staff"; } };
class School: public Teacher, public Staff{};
int main(){
    School obj;
    obj.t(); obj.s();
}

// ================= PROGRAM 60 =================
// Virtual Base Class (Diamond)
#include<iostream>
using namespace std;
class A{ public: int x; };
class B: virtual public A{};
class C: virtual public A{};
class D: public B, public C{};
int main(){
    D obj;
    obj.x=10;
    cout<<obj.x;
}