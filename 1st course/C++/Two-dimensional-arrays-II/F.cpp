int a[1001][1001];

int main(){
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("%d %d\n", m, n);
    
    for(int j = 0; j < m; j++){
        for(int i = n - 1; i >= 0; i--){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
