int a[10000];

int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        
        int min_item, max_item;
        
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(i == 0){
                min_item = a[0];
                max_item = a[0];
            }
            min_item = min(min_item, a[i]);
            max_item = max(max_item, a[i]);
        }
        
        for(int i = 0; i < n; i++){
            if(a[i] == min_item) a[i] = max_item;
            else{
                if(a[i] == max_item) a[i] = min_item;
            }
            printf("%d", a[i]);
            if(i == n - 1) printf("\n");
            else printf(" ");
        }
    }
    
    
    return 0;
}
