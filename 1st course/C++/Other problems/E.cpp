int main(){
    
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        ll a, k, result = 1;
        
        scanf("%lld%lld", &a, &k);
        
        while(k--){
            result *= a;
        }
        
        printf("%lld\n", result);
    }
    
    
    return 0;
}
