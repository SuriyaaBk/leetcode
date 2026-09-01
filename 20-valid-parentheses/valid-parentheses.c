bool isValid(char* s) {
    char* a=(char*)malloc(sizeof(char)*10001);
    int ind=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') a[ind++]=s[i];
        else if(ind>0 && s[i]==')' && a[--ind]=='(');
        else if(ind>0 && s[i]=='}' && a[--ind]=='{');
        else if(ind>0 && s[i]==']' && a[--ind]=='[');
        else{
        free(a);
        return false;
        }
    } 
    free(a);
    if(ind!=0) return false;
    return true;
}