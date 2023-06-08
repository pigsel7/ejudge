#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}


int main(){
    
    int n, m;
    while(cin >> n >> m) printf("%s\n", gcd(n, m) == 1 ? "YES" : "NO");
    
    return 0;
}
