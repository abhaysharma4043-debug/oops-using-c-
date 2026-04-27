// ================= PROGRAM 80 =================
// Multiple Namespace
#include<iostream>
using namespace std;
namespace A{ int x=5; }
namespace B{ int x=10; }
int main(){
    cout<<A::x<<" "<<B::x;
}

// ================= PROGRAM 81 =================
// Singleton (Simple)
#include<iostream>
using namespace std;
class A{
    static A* obj;
    A(){}
public:
    static A* get(){
        if(!obj) obj=new A();
        return obj;
    }
};
A* A::obj=NULL;
int main(){
    A* a=A::get();
    cout<<"Singleton";
}

// ================= PROGRAM 82 =================
// Copy Assignment
#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int a){ x=a; }
    void operator=(A o){ x=o.x; }
};
int main(){
    A a(5),b(10);
    a=b;
    cout<<a.x;
}

// ================= PROGRAM 83 =================
// Deep Copy
#include<iostream>
using namespace std;
class A{
public:
    int *p;
    A(int x){ p=new int(x); }
    A(const A &o){ p=new int(*o.p); }
};
int main(){
    A a(5);
    A b=a;
    cout<<*b.p;
}

// ================= PROGRAM 84 =================
// Aggregation
#include<iostream>
using namespace std;
class B{ public:int y=10; };
class A{
public:
    B b;
};
int main(){
    A a;
    cout<<a.b.y;
}

// ================= PROGRAM 85 =================
// Composition
#include<iostream>
using namespace std;
class B{ public:int y=20; };
class A{
    B b;
public:
    void show(){ cout<<b.y; }
};
int main(){
    A a;
    a.show();
}

// ================= PROGRAM 86 =================
// Association
#include<iostream>
using namespace std;
class B{ public:int y=30; };
class A{
public:
    void show(B b){ cout<<b.y; }
};
int main(){
    A a; B b;
    a.show(b);
}

// ================= PROGRAM 87 =================
// STL Vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3};
    for(int i:v) cout<<i;
}

// ================= PROGRAM 88 =================
// STL Map
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="A";
    cout<<m[1];
}

// ================= PROGRAM 89 =================
// STL List
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={1,2,3};
    for(int i:l) cout<<i;
}

// ================= PROGRAM 90 =================
// Simple Class Project
#include<iostream>
using namespace std;
class A{
public:
    void show(){ cout<<"Mini Project"; }
};
int main(){
    A obj;
    obj.show();
}

// ================= PROGRAM 91 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 91"; }

// ================= PROGRAM 92 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 92"; }

// ================= PROGRAM 93 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 93"; }

// ================= PROGRAM 94 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 94"; }

// ================= PROGRAM 95 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 95"; }

// ================= PROGRAM 96 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 96"; }

// ================= PROGRAM 97 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 97"; }

// ================= PROGRAM 98 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 98"; }

// ================= PROGRAM 99 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 99"; }

// ================= PROGRAM 100 =================
#include<iostream>
using namespace std;
int main(){ cout<<"Program 100"; }