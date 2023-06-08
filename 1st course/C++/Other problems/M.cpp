void f(long long n, long long k){
    if(k > n){
        printf("\n");
        return;
    }
    
    printf("%lld", k);
    if(k + 1 <= n) printf(" ");
    f(n, k + 1);
}



int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int l, r;
        scanf("%d%d", &l, &r);
        
        printf("%d\n", r - l + 1);
        f(r, l);
    }
    
    return 0;
}
