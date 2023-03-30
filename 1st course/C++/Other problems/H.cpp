int main(){
    
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, tmp;
        scanf("%d", &n);
        
        int sum = 0, count = 0;
        
        while(n--){
            scanf("%d", &tmp);
            if(!(tmp % 6)){
                count++; sum += tmp;
            }
        }
        
        printf("%d %d\n", count, sum);
        
    }
    
    
    return 0;
}
