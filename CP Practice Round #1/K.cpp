#include <bits/stdc++.h>
using namespace std;

int chek(int n, int k){
    int count = 0,p;
    for(int i = 1 ; i<=n ; i++){
        if( n % i == 0 ){
            count++;
            // cout << i << " ";
            if(count==k){
                return i;
            }
        }
    }
    return -1;
    
}

int main() {
    int a,k;
    cin >> a >> k ;
    cout << chek(a,k);
    return 0;
}
