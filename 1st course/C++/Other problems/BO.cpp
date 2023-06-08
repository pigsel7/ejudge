int main(){
    
    int t;
    scanf("%d", &t);
    
    string s;
    while(cin >> s){
        string sl = s.substr(0, (int)s.size() / 2);
        string sr = s.substr(((int)s.size() + 1) / 2,(int)s.size());
        
        sort(all(sl)); sort(all(sr));
        
        cout << (sl == sr ? "YES" : "NO") << endl;
    }
    
    
    
    return 0;
}
