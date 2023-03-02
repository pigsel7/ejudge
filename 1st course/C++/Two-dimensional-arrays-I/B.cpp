int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    int tmp = 0, min_item = 1000000001;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &tmp);
            min_item = min(min_item, tmp);
        }
        
        printf("%d\n", min_item);
        min_item = 1000000001;
    }
    
    
    return 0;
}
