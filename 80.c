#include<stdio.h>
void function(int * ptr, int n);
int main(){
    int a[]={1,2,3,4,5,6,7};
    function(a,7);
    for(int i=0;i<7;i++){
        printf("the value of %d of element is %d\n",i,a[i]);
    }
    return 0;
}
void function (int *ptr, int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
}