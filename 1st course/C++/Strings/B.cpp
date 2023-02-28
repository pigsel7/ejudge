int main() {
    
    string s;
    
    while (getline(cin, s)){
        int n = (int)s.size();
        
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(s[i] != ' '){
                if(i == 0){
                    count++;
                    continue;
                }
                if(s[i - 1] == ' ') count++;
            }
        }
        
        if(count) printf("%d\n", count);
    }
    
    
    
    return 0;
}
