char* addBinary(char* a, char* b) {
    int i = 0, j = 0, k = 0, c = 0;
    while(a[i] != '\0'){
        i++;
    }
    while(b[j] != '\0'){
        j++;
    }
    int n = (i > j ? i : j);
    char *result = (char*)malloc(n + 2);
    i--;
    j--;
    while(i >= 0 || j >= 0 || c){
        int sum = c;
        if(i >= 0)
            sum += a[i--] - '0';
        if(j >= 0)
            sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        c = sum / 2;
    }
    result[k] = '\0';
     for (int x = 0, y = k - 1; x < y; x++, y--) {
        char temp = result[x];
        result[x] = result[y];
        result[y] = temp;
    }
    return result;
}
