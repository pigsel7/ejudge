int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int l, r;
        scanf("%d%d", &l, &r);
        
        int l4 = l, l7 = l, l47 = l;
        while(l4 < r && l4 % 4) l4++;
        while(l7 < r && l7 % 7) l7++;
        while(l47 < r && (l47 % 4 || l47 % 7)) l47++;
        
        int ans = (r - l4) / 4 + (r - l7) / 7 - (r - l47) / 28;
        
        if(l4 % 4 == 0) ans++;
        if(l7 % 7 == 0) ans++;
        if(l47 % 28 == 0) ans--;
        
        printf("%d\n", ans);
        
    }
    
    return 0;
}
