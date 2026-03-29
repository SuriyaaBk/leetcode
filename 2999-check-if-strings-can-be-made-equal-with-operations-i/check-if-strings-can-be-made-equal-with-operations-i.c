void swap(char *a, char *b) {
    char c = *a;
    *a = *b;
    *b = c;
}
bool canBeEqual(char* s1, char* s2) {
    if(s1[0] != s2[0]) swap(&s1[0],&s1[2]);
    if(s1[1] != s2[1]) swap(&s1[1],&s1[3]);
    return !(strcmp(s1, s2));
}