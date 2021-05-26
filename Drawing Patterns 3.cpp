#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, something , nothing;
    cout<<"Enter a number(1-9) : "<<endl;
    cin>>n;
    if (n >9 ){
        cout<<"Input exceeds limit !!! \n";
    }
    else{
    int i,j;
    for (i=0; i<=n ; i++){
        for(j=0 ; j<i ; j++){

            printf("%d", i);
        }
        printf("\n");
    }
    }
    return 0;
}
