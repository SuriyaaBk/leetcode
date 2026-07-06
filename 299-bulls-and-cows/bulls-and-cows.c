char* getHint(char* secret, char* guess) {
    int hash_s[10]={0},hash_g[10]={0};
    int bulls=0,cows=0;
    char* ans=(char*)malloc(sizeof(char)*9);
    for(int i=0;secret[i]!='\0';i++){
        if(secret[i]==guess[i]) bulls++;
        else{
            hash_s[secret[i]-'0']++;
            hash_g[guess[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        cows+=(hash_s[i]<hash_g[i])?hash_s[i]:hash_g[i];
    }
    sprintf(ans,"%dA%dB",bulls,cows);
    return ans;
}