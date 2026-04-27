// ================= ALL 20 OOP PROGRAMS IN ONE FILE =================

// ================= PROGRAM 1 =================
#include<iostream>
using namespace std;
class A1{
public:
    void show(){ cout<<"Hello OOP"; }
};
int main(){
    A1 obj;
    obj.show();
}

// ================= PROGRAM 2 =================
#include<iostream>
using namespace std;
class A2{
public:
    A2(){ cout<<"Constructor Called"; }
};
int main(){
    A2 obj;
}

// ================= PROGRAM 3 =================
#include<iostream>
using namespace std;
class A3{
    int x;
public:
    A3(int a){ x=a; }
    void show(){ cout<<x; }
};
int main(){
    A3 obj(10);
    obj.show();
}

// ================= PROGRAM 4 =================
#include<iostream>
using namespace std;
class A4{
    int x;
public:
    A4(int a){ x=a; }
    A4(const A4 &o){ x=o.x; }
    void show(){ cout<<x; }
};
int main(){
    A4 o1(5);
    A4 o2=o1;
    o2.show();
}

// ================= PROGRAM 5 =================
#include<iostream>
using namespace std;
class A5{
public:
    ~A5(){ cout<<"Destroyed"; }
};
int main(){
    A5 obj;
}

// ================= PROGRAM 6 =================
#include<iostream>
using namespace std;
class A6{
private:
    int x;
public:
    void set(int a){ x=a; }
    int get(){ return x; }
};
int main(){
    A6 obj;
    obj.set(20);
    cout<<obj.get();
}

// ================= PROGRAM 7 =================
#include<iostream>
using namespace std;
class Base{
public:
    void show(){ cout<<"Base"; }
};
class Derived: public Base{};
int main(){
    Derived d;
    d.show();
}

// ================= PROGRAM 8 =================
#include<iostream>
using namespace std;
class A{
public:
    void show(){ cout<<"A"; }
};
class B: public A{};
class C: public B{};
int main(){
    C obj;
    obj.show();
}

// ================= PROGRAM 9 =================
#include<iostream>
using namespace std;
class A{
public:
    void f(){ cout<<"A "; }
};
class B{
public:
    void g(){ cout<<"B"; }
};
class C: public A, public B{};
int main(){
    C obj;
    obj.f();
    obj.g();
}

// ================= PROGRAM 10 =================
#include<iostream>
using namespace std;
class Add{
public:
    int sum(int a,int b){ return a+b; }
    int sum(int a,int b,int c){ return a+b+c; }
};
int main(){
    Add obj;
    cout<<obj.sum(2,3)<<endl;
    cout<<obj.sum(1,2,3);
}

// ================= PROGRAM 11 =================
#include<iostream>
using namespace std;
class Num{
public:
    int x;
    Num(int a){ x=a; }
    Num operator+(Num o){
        return Num(x+o.x);
    }
};
int main(){
    Num a(2),b(3);
    Num c=a+b;
    cout<<c.x;
}

// ================= PROGRAM 12 =================
#include<iostream>
using namespace std;
class Base{
public:
    virtual void show(){ cout<<"Base"; }
};
class Derived: public Base{
public:
    void show(){ cout<<"Derived"; }
};
int main(){
    Base *b;
    Derived d;
    b=&d;
    b->show();
}

// ================= PROGRAM 13 =================
#include<iostream>
using namespace std;
class A{
public:
    virtual void show()=0;
};
class B: public A{
public:
    void show(){ cout<<"Abstract Implemented"; }
};
int main(){
    B obj;
    obj.show();
}

// ================= PROGRAM 14 =================
#include<iostream>
using namespace std;
class A{
    int x=10;
    friend void show(A);
};
void show(A obj){
    cout<<obj.x;
}
int main(){
    A obj;
    show(obj);
}

// ================= PROGRAM 15 =================
#include<iostream>
using namespace std;
class A{
public:
    static int x;
};
int A::x=5;
int main(){
    cout<<A::x;
}

// ================= PROGRAM 16 =================
#include<iostream>
using namespace std;
class A{
public:
    int x;
};
int main(){
    A obj[3];
    obj[0].x=1;
    obj[1].x=2;
    obj[2].x=3;
    cout<<obj[1].x;
}

// ================= PROGRAM 17 =================
#include<iostream>
using namespace std;
class A{
    int x;
public:
    void set(int x){
        this->x=x;
    }
    void show(){
        cout<<x;
    }
};
int main(){
    A obj;
    obj.set(10);
    obj.show();
}

// ================= PROGRAM 18 =================
#include<iostream>
using namespace std;
class A{
public:
    int x;
};
int main(){
    A *p = new A;
    p->x=50;
    cout<<p->x;
    delete p;
}

// ================= PROGRAM 19 =================
#include<iostream>
using namespace std;
int main(){
    try{
        int a=10,b=0;
        if(b==0) throw b;
        cout<<a/b;
    }
    catch(int x){
        cout<<"Divide by zero";
    }
}

// ================= PROGRAM 20 =================
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("test.txt");
    file<<"Hello File";
    file.close();
}