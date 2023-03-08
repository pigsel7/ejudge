int a[1001][1001];

int main(){
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    int i = 0, j = 0, item = 1;
    int l = 0, r = m - 1, u = 1, d = n - 1;
    
    for(;;){
        bool flag = 0;
        while(j <= r){
            if(a[i][j] != 0){
                j++;
                continue;
            }
            a[i][j++] = item++;
            flag = 1;
        }
        if(item >= n * m + 1) break;
        if(flag) j--;
        else break;
        flag = 0;
        r--;

        while(i < d){
            a[++i][j] = item++;
        }
        if(item >= n * m + 1) break;
        d--;

        while(j > l){
            a[i][--j] = item++;
        }
        if(item >= n * m + 1) break;
        l++;
        while(i > u){
            a[--i][j] = item++;
        }
        u++;
        if(item >= n * m + 1) break;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
