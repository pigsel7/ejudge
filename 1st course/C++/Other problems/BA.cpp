int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int h, m;
        char c;
        scanf("%d%c%d", &h, &c, &m);
        
        if (h == 12 && m) h = 11;
        else{
            h = 12 - h;
            if(m) h--;
            if(!h) h = 12;
        }
        
        m = (60 - m) % 60;
        
        printf("%02d:%02d\n", h, m);
    }
    
    return 0;
}
