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
// tips:   method   in Public while   characteristic  in Private
class student 
{

 public:
  
    student();   //   reload func1
    student(int a, string b);   // reload func2
    
    bool read() const; // const method
    static int cnt; //count func
    
    static int count();
    void print_age_public();

private: // protect:     //used for sub-class
    void print_age_private();
    int age ;  
    string name;


};

void student::print_age_public(){
    cout<<"public use private:";
    print_age_private();
};
void student::print_age_private(){
    cout<<"private"<<endl;
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
    cout<<aa.read()<<" N is noe "<<endl;
    

    // cout<<aa.count()<<endl; 
    cout<<"the times of 'class' used are:   "<<student::count();
    
    //public and private

    aa.print_age_public();
    //aa.print_age_private();


    /*
    student *p1= new student(21,"Memery"); // reserve memery type
    delete p1;

    //example:
       student:: ~student() { cout<<"delete object"};
    */
}
//***************************************end********************************//

//sub-class regenerate
class undergraduate: public student
{

public:
        string courses;
        undergraduate();
        undergraduate(int a ,string b,string c);
};

undergraduate::undergraduate(){
    
    courses="Quantum";
}

undergraduate::undergraduate(int a ,string b,string c):student(a,b)
{
    
    courses= c ;
}


int main(){
   
    undergraduate mm;
    mm.read();
    cout<<mm.courses;
    
    //ClassT();
    /*
    
    */
    return 0;
}
//