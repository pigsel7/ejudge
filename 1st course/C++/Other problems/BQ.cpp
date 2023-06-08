int a[1001][1001];
int min_i[100001];
int max_j[100001];

int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
            if(min_i[i] == 0){
                min_i[i] = a[i][j];
            }
            if(max_j[j] == 0){
                max_j[j] = a[i][j];
            }
            min_i[i] = min(min_i[i], a[i][j]);
            max_j[j] = max(max_j[j], a[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(min_i[i] == a[i][j] && max_j[j] == a[i][j]){
                printf("%d\n", a[i][j]);
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    
    
    printf("0\n");
    
    return 0;
}
