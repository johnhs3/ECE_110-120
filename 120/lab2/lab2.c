/*Ece 120 JOHN SMITH Lab 2 assignment. 2-05-2020 */

#include <stdio.h>  //import statements
#include <math.h>  

int main()  //main
{  
  int a= 256; //Initialize n declare a.

    while (a > 1)
    {
      printf("%d\n", a);//print all numbers while a>1
      a = sqrt(a);
    }

    printf("%d\n", 1);
   
    return 0;


    //STUFF I DON'T NEED ANYMORE vv

     /*for (a = 256; a > 1; a = sqrt(a))  
    {  
        printf("%d\n", a);  
    }  

    printf("%d\n", 1);  

    return 0;*/
}  

