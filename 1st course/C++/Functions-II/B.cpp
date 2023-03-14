long long Euler(long long N){
    
    ll result = N;
    for (ll i = 2; i * i <= N; i++){
        if (N % i == 0){
            while (N % i == 0) N /= i;
            
            result -= result / i;
        }
    }
    if (N > 1) result -= result / N;
        
    return result;
}



int main() {
    
    ll N;
    scanf("%lld", &N);
    printf("%lld\n", Euler(N));
    
    
    return 0;
}
