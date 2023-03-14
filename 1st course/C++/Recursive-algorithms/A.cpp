void f(long long n, long long k){
    if(k > n){
        printf("\n");
        return;
    }
    
    printf("%lld ", k);
    f(n, k + 1);
}


int main(){
    
    ll n;
    scanf("%lld", &n);
    
    f(n, 1);
    
    
    return 0;
}
