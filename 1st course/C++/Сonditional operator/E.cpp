int main() {
    
    long long x, y;
    
    scanf("%lld%lld", &x, &y);
    
    int ans = 0;
    
    if(x * y == 0){
        ans = 1;
        if(y != 0) ans = 3;
        if(x != 0) ans = 2;
    }
    
    printf("%d\n", ans);
    
    
    return 0;
}
