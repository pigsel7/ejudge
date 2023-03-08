int cost[1001][1001];
char p[1001][1001];

int main(){
    
    int n, m, min_cost = 100000;
    
    scanf("%d%d", &n, &m);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &cost[i][j]);
            min_cost = min(min_cost, cost[i][j]);
        }
    }
    
    ll count = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%s", p[i]);
        for(int j = 0; j < m; j++){
            if(p[i][j] == '0'){
                if(cost[i][j] == min_cost) count++;
            }
        }
    }
    
    printf("%lld\n", count);
    
    
    return 0;
}
