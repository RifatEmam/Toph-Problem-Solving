
#include<stdio.h>
#include<stdlib.h>
int fibo(int x){

if(x==0 || x==1){
    return x;
}else {

return fibo(x-1)+fibo(x-2);
}

}

int main(){

int n;
scanf("%d",&n);
if(0<n && n<50){
 int result = fibo(n);
 printf("%d",result);

}


return 0;
}
