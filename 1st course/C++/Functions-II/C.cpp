long long Combin(int N, int M){
    
    long long result = 1;
    int down = 1, up = M + 1;
    
    while(up <= N || down <= N - M){
        if(up <= N) result *= up++;
        if(down <= N - M) result /= down++;
    }

    
    return result > 1000000000 ? -1 : result;
}




int main(){
    
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        ll ans = Combin(n, m);
        
        if(ans <= 0) printf("Too big!\n");
        else printf("%lld\n", ans);
    }
    
    
    return 0;
}
