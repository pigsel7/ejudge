int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a[4], b[4];
        for(int i = 0; i < 4; i++){
            scanf("%d", a + i);
            b[i] = *(a + i);
        }
        
        sort(a, a + 4);
        int num = (*a != *(a + 1)) ? *a : *(a + 3);
        
        for(int i = 0; i < 4; i++){
            if(*(b + i) == num) printf("%d\n", i + 1);
        }
        
    }
    
    return 0;
}
