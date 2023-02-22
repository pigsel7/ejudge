int main() {
    
    long long n, m, k, sum = 0;
    
    scanf("%lld%lld%lld", &n, &m, &k);
    
    vector<ll> a(n);
   
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        if(a[i] % m == k){
            sum += a[i];
            printf("%lld\n", a[i]);
        }
    }
    
    printf("%lld\n", sum);
    

    return 0;
}
