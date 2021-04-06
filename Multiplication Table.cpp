#include <iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
    int a,b,i;
    int j,c,d;
    a = 0 ;
    print("Enter A Number:");
    scanf("%d", &d);

    for (i=1 ; i <= d ; i++)
    {
        b = a+i;
        for (j=1 ; j <= 10 ; j++)

            {
                c = b*j;
                printf("%d x %d = %d \n",b,j,c);

            }
        printf("\n");
    }



    return 0;
}
