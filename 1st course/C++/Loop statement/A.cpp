int main() {
    
    long long N;
    
    scanf("%lld", &N);
    
    long long n = N;
    int sum = 0;
    
    while(n){
        sum += n % 10;
        n /= 10;
    }
    
    printf("%s\n", (N % sum) ? "NO" : "YES");
    
    

    return 0;
}
