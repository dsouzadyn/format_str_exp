#include <stdio.h>
int main() {
    const char *super_secret_creds = "time_mr_freeman";
    char pass[32];
    printf("Enter the pass:");
    fgets(pass, 32, stdin);
    if(strncmp(pass, super_secret_creds, 15) == 0) {
        printf("Welcome to Black Mesa, Dr. Gordon Freeman\n");
    } else {
        printf("bzzzt! invalid password:");
        printf(pass);
    }
    return 0;
}
