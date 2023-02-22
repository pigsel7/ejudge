long long gcd(long long a, long long b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}


int main() {
    
    long long t, a, b;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld%lld", &a, &b);
        if (a == 0 || b == 0){
            printf("%lld\n", max(a, b));
            continue;
        }
        printf("%lld\n", gcd(a, b));
    }
    
    
    return 0;
}
