int a[1000][1000];

int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    pair<int, int> min_item, max_item;
    min_item.ss = max_item.ss = 0;

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
            if(i == 0 && j == 0){
                min_item.ff = max_item.ff = a[i][j];
                continue;
            }
            if(a[i][j] > max_item.ff){
                max_item.ff = a[i][j];
                max_item.ss = j;
            }
            if(a[i][j] < min_item.ff){
                min_item.ff = a[i][j];
                min_item.ss = j;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j == min_item.ss){
                printf("%d ", a[i][max_item.ss]);
                continue;
            }
            if(j == max_item.ss){
                printf("%d ", a[i][min_item.ss]);
                continue;
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
