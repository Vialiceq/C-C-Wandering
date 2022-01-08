#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
// pointer func return point-to-array
int * getRandom( )
{
  static int  r[10];
 
  // set srand
  srand( (unsigned)time( NULL ) );
  for (int i = 0; i < 10; ++i)
  {
    r[i] = rand();
    cout << r[i] << endl;
  }
 
  return r;
}
 
// point function 
void Pointer(void){
    
    int *p;

    p = getRandom();
    for ( int i = 0; i < 10; i++ )
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
}

int main ()
{
   
   Pointer();
 
   return 0;
}

