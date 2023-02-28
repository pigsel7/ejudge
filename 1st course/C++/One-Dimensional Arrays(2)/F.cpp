int main() {
    
    int n, k;
    
    scanf("%d%d", &n, &k);
    vector<int> a(n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j + 1]) swap(a[j + 1], a[j]);
        }
    }
    
    for (auto i : a){
        printf("%d ", i);
    }
    
    
    printf("\n");
    
    
    return 0;
}
