int main() {
    
    long long a, n, m;
    
    scanf("%lld%lld%lld", &a, &n, &m);
    
    long long p = 1 % m, tmp = p;
    
    while(n-- > 0){
        tmp = (tmp % m) * a;
        p += (tmp % m);
        p = p % m;
        tmp = tmp % m;
    }
    
    printf("%lld\n", p);
    
   
    return 0;
}
