string StringXOR(string S, string K){
    int n = (int)S.size(), m = (int)K.size();
    
    string ans = "";
    
    for(int i = 0; i < n; i++){
        ans = ans + to_string((int)(S[i] ^ K[i % m])) + " ";
    }
    
    return ans;
}

char s_tmp[10001];
char key_tmp[10001];

int main(){
    
    scanf("%s%s", s_tmp, key_tmp);
    int n = (int)strlen(s_tmp), m = (int)strlen(key_tmp);
    
    string s = "", key = "";
    
    for(int i = 0; i < n; i++) s = s + s_tmp[i];
    for(int i = 0; i < m; i++) key = key + key_tmp[i];
    
    string ans = StringXOR(s, key);
    
    for(int i = 0; i < (int)ans.size() - 1; i++){
        printf("%c", ans[i]);
    }
    
    printf("\n");
    
    return 0;
}
