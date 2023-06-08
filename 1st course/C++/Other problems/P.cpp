int a[100];

int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        
        scanf("%d", a); bool flag = 0;
        int p[5000] = {0};
        
        for(int i = 1; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i] <= a[i - 1]){
                flag = 1;
            }
        }
        if(flag){
            printf("No\n");
            continue;
        }
        
        p[0] = 1;
        
        for(int i = 0; i < n; i++){
            for(int j = 1000; j >= 0; j--){
                //if(a[i] == j && p[j] < 2) continue;
                if(p[j]){
                    if(j + a[i] <= 1000) p[j + a[i]]++;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            if(p[a[i]] > 1){
                flag = 1;
                break;
            }
        }
        
        cout << (flag ? "No\n" : "Yes\n");
    }
    
    return 0;
}
