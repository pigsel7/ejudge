int counter[1001];

int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    vector<vector<int>> a(n);
    int tmp = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &tmp);
            a[i].pb(tmp);
            counter[tmp]++;
        }
    }
    
    for(auto item : a){
        for(int i = 0; i < (int)item.size(); i++){
            printf("%d ", counter[item[i]]);
        }
        printf("\n");
    }
    
    
    return 0;
}
