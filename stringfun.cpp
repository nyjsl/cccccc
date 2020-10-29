
unsigned int c_in_str(const char* str,char ch);

char* build_str(char c ,int n);

unsigned int c_in_str(const char* str,char ch){
    unsigned int count = 0;
    while (*str) // quit when * str is '\0'
    {
        if(*str == ch){
            count++;
        }
        str++; //move pointer to next char
    }
    return count;
    
}

char* build_str(char c ,int n){
    char* result = new char[n+1];
    result[n] = '\0';
    while (n-->0)
    {
        result[n] = c;
    }
    return result;
}