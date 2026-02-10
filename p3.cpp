#include<iostream>
#include<string>
using namespace std;
class car{
  
    public :
    int quantity;
    int price;
    string type;

   void enter(){
       cout<<"Enter Type of Car :  ";
       cin>>type;
       
       cout<<"Enter Price : ";
       cin>>price;

       cout<<"Enter Quantity";
       cin>>quantity;
    
   }

   void display(){
      cout<<"TYPE : "<<type;
      cout<<"PRICE : "<<price;
      cout<<"QUANTITY : "<<quantity;

   }
  
};
int main(){
      int T;
   car c1;
   cout <<"TASK : ";
   cout<<"=========     // ||     }}]}}}    ||   //"<<endl;
    cout<<"   ||       //  ||    ||         ||  //"<<endl;
    cout<<"   ||      //===||     }}        ||// "<<endl;
    cout<<"   ||     //    ||       }}      || //"<<endl;
    cout<<"   ||    //     ||   }}}}}}      ||   //"<<endl;


    cout<<"(1) ENTER :"<<endl;
    cout<<"(2) DISPLAY : "<<endl;
    for(int i=0;i<=20;i++){cout<<".";}
    cout<<"Enter Tsk To Perform : ";
    cin>>T;

    if (T==1){
       c1.enter();
    }
   else if (T==2){
       c1.display();
   }
  
    return 0;
}