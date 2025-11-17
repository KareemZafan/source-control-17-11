#include <stdio.h>

double add(double a , double b)
{
   return a + b ;
} 

long abs(long a){
return   (a > 0) ? a : -a; 
}

int main(){

printf("Hellow World!"); 
printf("Sum(%f,%f) = %f",10,20,add(10,20));
printf("Abs of -20 = %d,abs(20));
 
return 0;

}
