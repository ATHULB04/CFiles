#include <stdio.h>
int main(){
    FILE*fp1,*fp2;
    fp1=fopen("text1.txt","r");
    char ch;
    ch=fgetc(fp1);
    fp2=fopen("text.txt","a");
    while(ch!=EOF){
    fputc(ch,fp2);
    ch=fgetc(fp1);}
    fclose(fp1);
    fclose(fp2);
    return 0;
}