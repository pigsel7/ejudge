int a[1000001];
set<long long> primes;

bool isPrime(long long N){
    
    for(auto p : primes){
        if(p * p > N) break;
        if(N % p == 0) return false;
    }
    
    return true;
}


int main() {
    
    int n = 1000001;
    
    a[1] = 0;
    a[2] = 0;
    
    for(int i = 2; i < n; i++){
        if(a[i]) continue;
        primes.insert(i);
        for(int j = i + i; j < n; j += i){
            a[j] = 1;
        }
    }
    
    long long N;
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &N);
        
        if(isPrime(N)) printf("YES\n");
        else printf("NO\n");
    }
    
    
    return 0;
}
