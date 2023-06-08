int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a, n;
        scanf("%d%d", &a, &n);
        
        long long ans = 1;
        int i = 1;
        if(n % 2) i = -1;
        
        while(n){
            ans += a * n * i;
            i *= -1;
            n--;
        }
        
        printf("%lld\n", ans);
    }
    
    
    return 0;
}
