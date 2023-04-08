long long len[50];

char f(long long n, long long k){
    if(n == 0) return 'a';
    if(n == 1) return 'b';
    if(k <= len[n - 2]) return f(n - 2, k);
    return f(n - 1, k - len[n - 2]);
}


int main(){
    
    len[0] = len[1] = 1;
    for(int i = 2; i < 50; i++) len[i] = len[i - 1] + len[i - 2];

    int t;
    scanf("%d", &t);
    
    while(t--){
        long long n, k;
        scanf("%lld%lld", &n, &k);
        printf("%c\n", f(n, k));
    }
    
    return 0;
}
