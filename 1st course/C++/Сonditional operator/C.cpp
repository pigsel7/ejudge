#include <stdio.h>

using namespace std;

 
int main() {
    
    long long a, b, c;
    
    scanf("%lld%lld%lld", &a, &b, &c);
    
    if(a > b){
        a += b;
        b = a - b;
        a -= b;
    }
    if(a > c){
        a += c;
        c = a - c;
        a -= c;
    }
    if(b > c){
        b += c;
        c = b - c;
        b -= c;
    }
    
    printf("%.7lf\n", ((double)c * c - a * a) / ((double)b * b - a * a));
    
    
    return 0;
}
