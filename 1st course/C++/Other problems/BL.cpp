vector<int> a;

void sum_long(string s1, string s2){
    
    if(s2.size() > s1.size()) swap(s1, s2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    
    int p = 0;
    
    for(int i = 0; i < s1.size(); i++){
        int num = s1[i] - '0' + (i < s2.size() ? s2[i] - '0' : 0) + p;
        a.pb(num % 10);
        p = num / 10;
    }
    if(p) a.pb(p);
}

int main(){
    
    string s1, s2;
    cin >> s1 >> s2;
    
    sum_long(s1, s2);
    
    while(a.size()){
        cout << a.back();
        a.pop_back();
    }
    
    printf("\n");
    
    
    return 0;
}
