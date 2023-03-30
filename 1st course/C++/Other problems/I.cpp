int main(){
    
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        long long n;
        
        scanf("%lld", &n);
        
        long long mul = 1, sum = 0;
        
        while(n){
            mul *= n % 10;
            sum += n % 10;
            n /= 10;
        }
        
        printf("%.3lf\n", (double)mul / sum);
    }
    
    
    
    return 0;
}
