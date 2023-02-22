int main(){
    
    long long a, b, c;
    
    scanf("%lld%lld%lld", &a, &b, &c);
    
    if(a > 0) a *= a * a;
    else a *= a;
    
    if(b > 0) b *= b * b;
    else b *= b;
    
    if(c > 0) c *= c * c;
    else c *= c;
    
    printf("%lld %lld %lld\n", a, b, c);
    
    
    return 0;
}
