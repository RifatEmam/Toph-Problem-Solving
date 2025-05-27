#include<stdio.h>

double fact(int x){
if(x==0||x==1){
    return 1;

}else {

return x*fact(x-1);
}

}


int main(){

 int  n;
 long long int result;
scanf("%d",&n);
if(0<n && n<1000){
   result=fact(n);
     printf("%lld",result%10000);
  }






return 0;
}
