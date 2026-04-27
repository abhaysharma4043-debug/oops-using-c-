// ================= PROGRAM 21 =================
// Static Member Function
#include<iostream>
using namespace std;
class A{
public:
    static void show(){ cout<<"Static Function"; }
};
int main(){
    A::show();
}

// ================= PROGRAM 22 =================
// Inline Function
#include<iostream>
using namespace std;
class A{
public:
    inline void show(){ cout<<"Inline Function"; }
};
int main(){
    A obj;
    obj.show();
}

// ================= PROGRAM 23 =================
// Swap using Class
#include<iostream>
using namespace std;
class A{
public:
    int a,b;
    void input(){ cin>>a>>b; }
    void swap(){ int t=a; a=b; b=t; }
    void show(){ cout<<a<<" "<<b; }
};
int main(){
    A obj;
    obj.input();
    obj.swap();
    obj.show();
}

// ================= PROGRAM 24 =================
// Largest Number
#include<iostream>
using namespace std;
class A{
public:
    int a,b,c;
    void input(){ cin>>a>>b>>c; }
    void show(){
        if(a>b && a>c) cout<<a;
        else if(b>c) cout<<b;
        else cout<<c;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}

// ================= PROGRAM 25 =================
// Constructor Overloading
#include<iostream>
using namespace std;
class A{
public:
    A(){ cout<<"Default "; }
    A(int x){ cout<<"Param "<<x; }
};
int main(){
    A a;
    A b(10);
}

// ================= PROGRAM 26 =================
// Destructor Order
#include<iostream>
using namespace std;
class A{
public:
    ~A(){ cout<<"Destructor "; }
};
int main(){
    A a,b,c;
}

// ================= PROGRAM 27 =================
// This Pointer
#include<iostream>
using namespace std;
class A{
    int x;
public:
    void set(int x){ this->x=x; }
    void show(){ cout<<x; }
};
int main(){
    A obj;
    obj.set(99);
    obj.show();
}

// ================= PROGRAM 28 =================
// Array of Objects
#include<iostream>
using namespace std;
class A{
public:
    int x;
};
int main(){
    A obj[2];
    obj[0].x=10;
    obj[1].x=20;
    cout<<obj[0].x<<" "<<obj[1].x;
}

// ================= PROGRAM 29 =================
// Dynamic Memory (new/delete)
#include<iostream>
using namespace std;
class A{
public:
    int x;
};
int main(){
    A *p = new A;
    p->x = 100;
    cout<<p->x;
    delete p;
}

// ================= PROGRAM 30 =================
// Class Template
#include<iostream>
using namespace std;
template <class T>
class A{
public:
    T x;
    void set(T a){ x=a; }
    void show(){ cout<<x; }
};
int main(){
    A<int> obj;
    obj.set(50);
    obj.show();
}

// ================= PROGRAM 31 =================
// Function Template
#include<iostream>
using namespace std;
template <class T>
T add(T a, T b){
    return a+b;
}
int main(){
    cout<<add(2,3);
}

// ================= PROGRAM 32 =================
// Exception Handling
#include<iostream>
using namespace std;
int main(){
    try{
        int a=10,b=0;
        if(b==0) throw b;
        cout<<a/b;
    }
    catch(int){
        cout<<"Error";
    }
}

// ================= PROGRAM 33 =================
// Multiple Catch
#include<iostream>
using namespace std;
int main(){
    try{
        throw 10;
    }
    catch(int){
        cout<<"Integer";
    }
    catch(...){
        cout<<"Other";
    }
}

// ================= PROGRAM 34 =================
// Nested Try
#include<iostream>
using namespace std;
int main(){
    try{
        try{
            throw 5;
        }
        catch(int x){
            cout<<"Inner "<<x<<endl;
            throw;
        }
    }
    catch(int x){
        cout<<"Outer "<<x;
    }
}

// ================= PROGRAM 35 =================
// Rethrow Exception
#include<iostream>
using namespace std;
int main(){
    try{
        try{
            throw 7;
        }
        catch(int){
            throw;
        }
    }
    catch(int x){
        cout<<x;
    }
}

// ================= PROGRAM 36 =================
// Division by Zero
#include<iostream>
using namespace std;
int main(){
    try{
        int a=5,b=0;
        if(b==0) throw "Divide by zero";
        cout<<a/b;
    }
    catch(const char* msg){
        cout<<msg;
    }
}

// ================= PROGRAM 37 =================
// File Write
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f("a.txt");
    f<<"Hello";
    f.close();
}

// ================= PROGRAM 38 =================
// File Read
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream f("a.txt");
    string s;
    getline(f,s);
    cout<<s;
    f.close();
}

// ================= PROGRAM 39 =================
// File Append
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f("a.txt", ios::app);
    f<<" World";
    f.close();
}

// ================= PROGRAM 40 =================
// Method Overriding
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
    B obj;
    obj.show();
}