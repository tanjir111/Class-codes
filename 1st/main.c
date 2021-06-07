#include <stdio.h>
int length(char ch[20]){
    int i;
    for (i = 0; ch[i] != '\0'; ++i);
    return i;
}
void alphabet(){
    char vowel[20],consonent[20],characters[20];
    int n,j=0,k=0,i;
    gets(characters);
    n=length(characters);
    for (i=0;i<n;i++){
        if((characters[i]=='a') || (characters[i]=='e') || (characters[i]=='i') || (characters[i]=='0') ||
           (characters[i]=='u') || (characters[i]=='A') || (characters[i]=='E') ||  (characters[i]=='I') ||
           (characters[i]=='O') || (characters[i]=='U'))
            {
            vowel[j]=characters[i];
            j++;
        }
        else{
            consonent[k]=characters[i];
            k++;
        }
    }
    printf("VOWEL= ");
    for(i=0;i<j;i++){
        printf("%c ",vowel[i]);
    }
    printf("CONSONENT= ");
    for(i=0;i<k;i++){
        printf("%c ",consonent[i]);
    }
    printf("\n");
}

void reverse(){
    char characters[20];
    scanf("%s",&characters);
    int i,n;
    n=length(characters);
    for(i=n-1;i>=0;i--){
        printf("%c",characters[i]);
    }
    printf("\n");
}
void compare(){
    char characters1[20],characters2[20];
    scanf("%s %s",&characters1,&characters2);
    int i,a=1;
    if(length(characters1)==length(characters2)){
        for(i=0;i<=(length(characters1));i++){
            if(characters1[i]!=characters2[i]){
                a=0;
                break;
            }
        }
        if(a==1){
            printf("They are equal\n");
        }
        else{
            printf("They are not equal\n");
        }
    }
    else{
        printf("They are not equal");
    }

}
void get_length(){
    char characters[20];
    scanf("%s",&characters);
    printf("length is %d\n",length(characters));
}
void main()
{
    int t=1;
    while(t==1){
        int choice;
        printf("Input integer must be (1-5): ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                alphabet();
                break;
            case 2:
                reverse();
                break;
            case 3:
                compare();
                break;
            case 4:
                get_length();
                break;
            case 5:
                t=0;
        }
    }
    return 0;
}

