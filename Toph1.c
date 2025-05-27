#include<stdio.h>
int main(){
 long long A;
 long long B;
 int sum=0;
 if(-2000000000< A < 2000000000  && -2000000000< B < 2000000000 ){
 scanf("%lld %lld",&A,&B);
 sum=A+B;
 printf("%lld\n",sum);

 }


return 0;
}
