bool cmp(vector<int> a, vector<int> b){
    return a[1] < b[1];
}


int main() {
    
    int n;
    
    scanf("%d", &n);
    
    int tmp;
    vector<vector<int>> v(n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        v[i].pb(tmp);
        v[i].pb(i);
    }
    
    sort(v.begin(), v.end());
    
    int l = min(v[0][1], v[n - 1][1]);
    int r = max(v[0][1], v[n - 1][1]);
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < n; i++){
        if(i == l + 1){
            for(int j = r - 1; j > l; j--){
                printf("%d ", v[j][0]);
            }
            i = r;
        }
        printf("%d ", v[i][0]);
    }
    
    printf("\n");
    
    
    return 0;
}
