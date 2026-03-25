int percentageLetter(char* s, char letter) {
    int n, c = 0;
    for(n = 0; s[n]; n++) {
        if(s[n] == letter) c++;
    }
    return  100 * c / n;
}