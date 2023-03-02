long long max_sum[100000];

int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    long long tmp;
    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%lld", &tmp);
            max_sum[j] += tmp;
        }
    }
    
    pair<long long, int> ans;
    ans.ff = max_sum[0];
    ans.ss = 0;
    
    for(int j = 0; j < m; j++){
        if(ans.ff < max_sum[j]){
            ans.ff = max_sum[j];
            ans.ss = j;
        }
    }
    
    printf("%d %lld\n", ans.ss, ans.ff);
    
    
    return 0;
}
