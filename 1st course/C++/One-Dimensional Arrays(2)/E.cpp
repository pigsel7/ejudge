int main() {
    
    int n, k;
    
    scanf("%d%d", &n, &k);
    vector<int> a(n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    
    for(int i = 0; i < k; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    
    for (auto i : a){
        printf("%d ", i);
    }
    
    
    printf("\n");
    
    
    return 0;
}
