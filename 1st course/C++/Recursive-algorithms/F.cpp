long long superNum(long long num){
    if (num < 10) return num;
    
    long long sum = 0;
    
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    
    return superNum(sum);
}


char s[1000000];

int main(){

    int k;
    scanf("%s%d", s, &k);
    
    long long sum = 0;
    
    for (int i = 0; i < strlen(s); i++){
        sum += s[i] - '0';
    }
    
    sum *= k;
    printf("%lld\n", superNum(sum));

    return 0;
}
