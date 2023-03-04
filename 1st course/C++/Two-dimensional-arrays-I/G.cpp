int a[1000][1000];

int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    int min_item = 1000000001, max_item = a[0][0];
    for(int i = 0; i < n; i++){
        max_item = a[i][0];
        for(int j = 1; j < m; j++){
            max_item = max(max_item, a[i][j]);
        }
        min_item = min(min_item, max_item);
    }
    
    printf("%d\n", min_item);
    
    
    
    return 0;
}
