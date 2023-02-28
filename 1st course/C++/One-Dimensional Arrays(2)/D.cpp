int main() {
    
    int n, m;
    
    scanf("%d", &n);
    vector<int> a(n), b;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    scanf("%d", &m);
    b.resize(m);
    for(int i = 0; i < m; i++) scanf("%d", &b[i]);
    
    int l = 0, r = 0;
    
    for(int i = 0; i < n + m; i++){
        if(l >= n){
            printf("%d ", b[r++]);
            continue;
        }
        if(r >= m){
            printf("%d ", a[l++]);
            continue;
        }
        if(a[l] <= b[r]){
            printf("%d ", a[l++]);
            continue;
        }
        printf("%d ", b[r++]);
    }
    
    printf("\n");
    
    
    return 0;
}
