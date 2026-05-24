int passwordStrength(char* password) {
    int* hash = (int*)calloc(128, sizeof(int));
    int ans = 0;
    for(int i = 0; password[i]; i++) {
        if(hash[password[i]] == 0) {
            if(password[i] >= 'a') ans += 1;
            else if(password[i] >= 'A') ans += 2;
            else if(password[i] >= '0' && password[i] <= '9') ans += 3;
            else ans+= 5;
        }
        hash[password[i]]++;
    }
    free(hash);
    return ans;
}