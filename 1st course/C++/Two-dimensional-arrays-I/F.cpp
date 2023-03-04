int a[1000][1000];

int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    vector<pair<int, int>> b(m);
    
    for(int i = 0; i < m; i++){
        b[i].ff = a[n - 1][i];
        b[i].ss = i;
    }
    
    sort(all(b));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][b[j].ss]);
        }
        printf("\n");
    }
    
    return 0;
}
