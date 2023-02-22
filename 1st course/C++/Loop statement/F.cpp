string sum(string s1, string s2){
    
    int n = (int)s1.size(), m = (int)s2.size();
    
    if(n < m){
        swap(n, m);
        swap(s1, s2);
    }
    int p = 0;

    string answer = "";
    
    int l = n - 1, r = m - 1;
    
    while(l >= 0 && r >= 0){
        answer += (char)(((int)s1[l] - 48 + (int)s2[r] - 48 + p) % 10);
        p = (((int)s1[l] - 48 + (int)s2[r] - 48 + p) / 10);
        l--; r--;
    }
    
    while(l >= 0){
        answer += (char)(((int)s1[l] - 48 + p) % 10);
        p = ((int)s1[l] - 48 + p) / 10;
        l--;
    }
    
    if(p > 0){
        answer += (char)p;
    }
    
    string ans = "";
    
    for(int i = 0; i < answer.size(); i++){
        ans += (char)((int)answer[answer.size() - 1 - i] + 48);
    }
    
    return ans;
    
    
}

int main() {
    
    vector<string> a(100, "0");
    
    a[0] = "0";
    a[1] = "0";
    a[2] = "1";
    
    for(int i = 3; i < 77; i++){
        a[i] = sum(sum(a[i - 1], a[i - 2]), a[i - 3]);
    }
    
    int index;
    
    scanf("%d", &index);
    string answer = a[index];
    cout << answer << endl;
    
   
    return 0;
}
