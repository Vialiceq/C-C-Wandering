#include <stdio.h>
#include "t001.c"


/*Scan opearate*/
void testScanf(void){
    char str[100];
    int i;
    printf("enter a value contain  str and number :");
    scanf("%s %d",str,&i);

    printf("\n you entered is :%s %d \n",str,i);
}

/* file opearate */
void fileUse(void){
    FILE *fp=NULL;
    char buff[255];
    /* create file & open*/
    fp=fopen("./tmp/1.txt","w+");  
    fprintf(fp,"test fprintf...\n");
    fputs("this is also fputs...\n",fp);
    fclose(fp);

    /* read file*/
    

    fscanf(fp,"%s",buff);
    printf("fscan:%s\n",buff);

    fgets(buff, 255,fp);
    printf("fgets:%s\n",buff);

    fgets(buff, 255, fp);
    printf("3: %s \n",buff);
 
    /*close file*/
    fclose(fp);
  
}

/* about # define*/
void testA_define(void){

   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
}

int main(){

    testA_define();
    /*
    testScanf();
    fileUse();
    test001(); 
    
    */
    return 0;
    
}


/*

#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file

#endif

#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

int main(void)
{
   int token34 = 40;
   
   tokenpaster(34);
   return 0;
}

**********************************
***************Compile************

PS D:\dialogdfile\C> gcc -Og -o -prog main.c t001.c  //compile both
PS D:\dialogdfile\C> gcc -Og -S main.c           // get .s file
PS D:\dialogdfile\C> gcc -Og -c main.c          // get .o file(machine code)
PS D:\dialogdfile\C> objdump -d main.o   //show  reverse-compile code
PS D:\dialogdfile\C> gcc -o hello main.c          //compile
PS D:\dialogdfile\C> .\hello


*/
