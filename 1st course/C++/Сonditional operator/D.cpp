int main() {
    
    long long a, b, c;
    
    scanf("%lld%lld%lld", &a, &b, &c);
    
    if(a > b && b > c){
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else{
        a *= (-1);
        b *= (-1);
        c *= (-1);
    }
    
    printf("%lld %lld %lld\n", a, b, c);
    
  
    return 0;
}
