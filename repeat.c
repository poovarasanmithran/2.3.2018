#include<stdio.h>
int main(){
    char str[50];
    int i, j = 0;
    scanf("%s", str);
    for(i = 1; str[i] != '\0';i++){
        if(str[i-1] == str[i]){//For consecutive repeated characters
            j = i-1;        //If found, we place an index j there
            j++;
            while(1){           //This loops checks for mutiple
                if(str[j] == str[j+1])  //occurrences of a character
                    j++;
                else
                    break;
            }
            printf("Character %c is repeated %d times\n", str[i], j - (i-1)+1);
            i = j;
        }
    }
    if(j == 0){
        printf("No repeated character");
    }
    return 0;
}
