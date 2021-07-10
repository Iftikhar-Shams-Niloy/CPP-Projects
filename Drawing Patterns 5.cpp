#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, something , nothing;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i,j,k=1;
    for (i=0; i<=n ; i++){
        for(j=0 ; j<i ; j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
