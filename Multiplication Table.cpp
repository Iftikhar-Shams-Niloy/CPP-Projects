#include <iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
    int a,b,i;
    int j,c;
    a = 4 ;


    for (i=1 ; i <= 16 ; i++)
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
