int a[1001][1001];

int main(){
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    int item = 1;
    
    int i = 0, j = m - 1;
    
    for(;;){
        int y = j;
        
        for(int x = i; x >= 0 && x < n && y < m && y >= 0;){
            a[x--][y--] = item++;
        }
        if(i < n - 1) i++;
        else{
            if(j > 0) j--;
            else break;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
  
    return 0;
}
