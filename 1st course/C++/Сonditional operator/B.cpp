#include <stdio.h>

using namespace std;
     
int main(){
    
    long long a, b, c;
    
    scanf("%lld%lld%lld", &a, &b, &c);
    
    if(a > b) a = b;
    if(c < a) a = c;
    
    printf("%lld\n", a);
    
    
    return 0;
}
