char* smallestString(char* s) {
    int i = 0;
    while(s[i] && s[i] == 'a') i++;
    if(s[i] == '\0') s[i - 1] = 'z';
    while(s[i] && s[i] != 'a') s[i++]--;
    return s;
}