char a[1001][1001];

int main(){
    
    int n, m;
    scanf("%d%d", &m, &n);
    
    for(int i = 0; i < n; i++){
        scanf("%s", a[i]);
    }
    
    ll len = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 'A'){
                if(i > 0){
                    if(a[i - 1][j] == 'B') len++;
                }
                if(i < n - 1){
                    if(a[i + 1][j] == 'B') len++;
                }
                if(j > 0){
                    if(a[i][j - 1] == 'B') len++;
                }
                if(j < m - 1){
                    if(a[i][j + 1] == 'B') len++;
                }
            }
        }
    }
    
    printf("%lld\n", len);
    
    
    return 0;
}
