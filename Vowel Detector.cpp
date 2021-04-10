#include <iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;
///This Program Detects How Many Vowel does the given word got!//

int main(){
    char nam[100];
    printf("Enter A Word:");
    scanf("%s", &nam);
    char vow[10]= {'a','e','i','o','u','A','E','I','O','U'};
    char user;
    int i,a,b;
    a = 0;
    for(i=0;i<100;i++)
        {
    if(nam[i] == vow[0] ||
       nam[i] == vow[1] ||
       nam[i] == vow[2] ||
       nam[i] == vow[3] ||
       nam[i] == vow[4] ||
       nam[i] == vow[5] ||
       nam[i] == vow[6] ||
       nam[i] == vow[7] ||
       nam[i] == vow[8] ||
       nam[i] == vow[9]
       )
       a = a+1;

        }
printf("Total Number of Vowel(s): %d \n ",a);
    return 0;
}
