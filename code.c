int minOperations(char** logs, int s) {
    int ans = 0;
    for (int i = 0; i < s; i++) {
        if (strcmp(logs[i], "../") == 0)
            ans = fmax(0, ans - 1);
        else if (strcmp(logs[i], "./") != 0)
            ans++;
    }
    return ans;
}
