int main(){
    
    
    int t;
    scanf("%d", &t);
    
    int tmp;
    
    while(t--){
        scanf("%d", &tmp);
        if(tmp % 10 == tmp / 100){
            printf("=\n");
            continue;
        }
        
        printf("%d\n", tmp / 100 > tmp % 10 ? tmp / 100 : tmp % 10);
    }
    
    
    return 0;
}
