int main() {
    
    int n;
    
    scanf("%d", &n);
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        a[i].pb(tmp);
        a[i].pb(i);
    }
    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j + 1]) swap(a[j + 1], a[j]);
        }
    }
    
    for (auto i : a){
        printf("%d ", i[1]);
    }
    
    
    printf("\n");
    
    
    return 0;
}
