#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, something , nothing;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i,j;
    for (i=0; i<=n ; i++){
        for(j=0 ; j<i ; j++){
            printf("* ",);
        }
        printf("\n");
    }
    return 0;
}
