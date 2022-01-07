#include <stdio.h>
 

/*max Fun*/
int max(int x, int y)
{
return x>y ? x :y;

}

/* *******pointer Function ********

   This part can realize find the max number among 4 number you input
*/
void pointerFunction(void)
{
    int (* p) (int ,int) = max;
    int a[3],maxNum;
    for(int i=0; i<3; i++){
        printf("please enter %d/3 numbers:",i+1);
        scanf("%d", &a[i]);
    }
    maxNum=p(p(a[0],a[1]),a[2]);
    printf("the max number is : %d \n", maxNum);

}


/* Return pointer subfunction*/
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for(size_t i=0; i<arraySize; i++)
        array[i]=getNextValue() ;
}

int getNextRandomValue(void)
{
    return rand();
}

/******* Return pointer function*******/
void ReturnPointerFunction(void){

    int myarry[10];

    populate_array(myarry, 10 , getNextRandomValue);
    for(int i=0; i<10;i++)
        printf("random number is: %d \n", myarry[i]);
    
    printf("\n end");

}
int main(){

    pointerFunction();

    ReturnPointerFunction();

    return 0;


}
