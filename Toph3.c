
#include<stdio.h>
int main(){
 long long A;


 if(0<= A && A < 200000000 ){
 scanf("%lld",&A);

 do{
   A=A/10;
   A++;
   if(A>3){
    printf(",");
   }
 }while(A!=0);



 }
return 0;

}
