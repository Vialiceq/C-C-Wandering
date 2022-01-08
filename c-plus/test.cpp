#include <iostream>

using namespace std;

//compile test 
int c(int &a){

    if (a>10) {
        return a=20;}
    else 
    {
     return a=0;
    }
    
}

void complieTest(void){
    int a=1;
    c(a);
    cout<<a;
}

//***********************************class object*************************//
class student{

 public:
     int age ;  //static
     string name;

    student();   //   reload func1
    student(int a, string b);   // reload func2
    
    bool read() const; // const method
    static int cnt; //count func
    
    static int count();
};

int student::cnt=0;
//class function

student:: student(){

    age=23;
    name="Ag";
    cnt++;

}
student:: student(int a, string b){

    age=a;
    name=b;
    cnt++;
}

bool student::read() const
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<"corrected read? "<<endl;
    return true;

}

int student::count(){
    return cnt;
}

void ClassT(){

    student aa;
    
    student bb(15,"nice");
     cout<<bb.read()<<endl;
    cout<<aa.name<<" N is noe "<<endl;
    

    // cout<<aa.count()<<endl; 
    cout<<"the times of 'class' used are:   "<<student::count();


    /*
    student *p1= new student(21,"Memery"); // reserve memery type
    delete p1;

    //example:
       student:: ~student() { cout<<"delete object"};
    */
}
//***************************************end********************************//


int main(){
   
    ClassT();
    return 0;
}
//