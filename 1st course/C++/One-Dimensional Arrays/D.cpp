int main() {
    
    int n;
    
    scanf("%d", &n);
    
    int tmp;
    vector<int> f;

    
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        f.pb(tmp);
    }
    
    printf("%d ", f[n - 1]);
    
    for(int i = 0; i < (n - 1); i++) printf("%d ", f[i]);
    printf("\n");
    

    return 0;
}
