char *stringrChr(char *s, char ch){
    int len=0,j;
    while (s[len] != '\0')
        len++;

    for (j=len-1;j>=0;j--){
        if (*(s+j) == ch)
        return s+j;
    }
    return NULL;

}