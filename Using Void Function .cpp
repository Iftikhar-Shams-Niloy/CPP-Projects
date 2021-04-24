#include<stdio.h>

int niloy(int a);
void shams(int a);

int main(){
    int b,c,d,x ;
    printf("***Enter 1st Number***: ");
    scanf("%d",&b);
    c = niloy(b);
    printf("***Enter 2nd Number***: ");
    scanf("%d",&x);
    printf("**Enter A Number(To cube)**: ");
    scanf("%d",&d);
    printf("\nSum is(both squared):%d \n", c+(niloy(x)));
    printf("Sum is (2nd num not squared) :%d", c+ x);
    shams(d);
}
///Making another int function
int niloy(int a){
    int res;
    res = a*a;
    return res;
}
///Making a Void function
void shams(int a){
     int res;
     res = a*a*a;
     printf("\nResult(Cubed) :%d\n", res);
}
