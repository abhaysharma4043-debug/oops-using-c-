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

// ================= PROGRAM 61 =================
// String Handling
#include<iostream>
using namespace std;
class A{
public:
    string s;
    void show(){ cout<<s; }
};
int main(){
    A obj;
    obj.s="Hello";
    obj.show();
}

// ================= PROGRAM 62 =================
// Reverse String
#include<iostream>
using namespace std;
class A{
public:
    string s;
    void rev(){
        for(int i=s.length()-1;i>=0;i--)
            cout<<s[i];
    }
};
int main(){
    A obj;
    obj.s="Abhay";
    obj.rev();
}

// ================= PROGRAM 63 =================
// Palindrome
#include<iostream>
using namespace std;
int main(){
    string s="madam", r="";
    for(int i=s.size()-1;i>=0;i--) r+=s[i];
    if(s==r) cout<<"Palindrome";
}

// ================= PROGRAM 64 =================
// Count Vowels
#include<iostream>
using namespace std;
int main(){
    string s="hello";
    int c=0;
    for(char ch:s)
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') c++;
    cout<<c;
}

// ================= PROGRAM 65 =================
// Sorting
#include<iostream>
using namespace std;
int main(){
    int a[5]={5,2,4,1,3};
    for(int i=0;i<5;i++)
    for(int j=i+1;j<5;j++)
        if(a[i]>a[j]) swap(a[i],a[j]);
    for(int i:a) cout<<i<<" ";
}

// ================= PROGRAM 66 =================
// Searching
#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5}, x=3;
    for(int i=0;i<5;i++)
        if(a[i]==x) cout<<"Found";
}

// ================= PROGRAM 67 =================
// Stack using Array
#include<iostream>
using namespace std;
int main(){
    int st[5], top=-1;
    st[++top]=10;
    cout<<st[top];
}

// ================= PROGRAM 68 =================
// Queue using Array
#include<iostream>
using namespace std;
int main(){
    int q[5], f=0,r=0;
    q[r++]=10;
    cout<<q[f];
}

// ================= PROGRAM 69 =================
// Linked List (Simple)
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node *n=new Node();
    n->data=10;
    n->next=NULL;
    cout<<n->data;
}

// ================= PROGRAM 70 =================
// Binary Tree (Basic)
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *l,*r;
};
int main(){
    Node *root=new Node();
    root->data=1;
    root->l=root->r=NULL;
    cout<<root->data;
}

// ================= PROGRAM 71 =================
// Operator Overloading ==
#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int a){ x=a; }
    bool operator==(A o){ return x==o.x; }
};
int main(){
    A a(5),b(5);
    cout<<(a==b);
}

// ================= PROGRAM 72 =================
// Operator Overloading ++
#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int a){ x=a; }
    void operator++(){ x++; }
};
int main(){
    A a(5);
    ++a;
    cout<<a.x;
}

// ================= PROGRAM 73 =================
// Operator Overloading --
#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int a){ x=a; }
    void operator--(){ x--; }
};
int main(){
    A a(5);
    --a;
    cout<<a.x;
}

// ================= PROGRAM 74 =================
// Operator << >>
#include<iostream>
using namespace std;
class A{
public:
    int x;
};
istream& operator>>(istream &in, A &o){ return in>>o.x; }
ostream& operator<<(ostream &out, A &o){ return out<<o.x; }
int main(){
    A a;
    cin>>a;
    cout<<a;
}

// ================= PROGRAM 75 =================
// Conversion Constructor
#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int a){ x=a; }
};
int main(){
    A a=10;
    cout<<a.x;
}

// ================= PROGRAM 76 =================
// Type Casting
#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int a){ x=a; }
    operator int(){ return x; }
};
int main(){
    A a(5);
    int y=a;
    cout<<y;
}

// ================= PROGRAM 77 =================
// Const Function
#include<iostream>
using namespace std;
class A{
public:
    int x=10;
    int get() const { return x; }
};
int main(){
    A a;
    cout<<a.get();
}

// ================= PROGRAM 78 =================
// Mutable Keyword
#include<iostream>
using namespace std;
class A{
public:
    mutable int x=0;
    void fun() const { x++; cout<<x; }
};
int main(){
    const A a;
    a.fun();
}

// ================= PROGRAM 79 =================
// Namespace
#include<iostream>
using namespace std;
namespace A{ int x=5; }
int main(){
    cout<<A::x;
}

// ================= PROGRAM 80 =================
// Multiple Namespace
#include<iostream>
using namespace std;
namespace A{ int x=5; }
namespace B{ int x=10; }
int main(){
    cout<<A::x<<" "<<B::x;
}