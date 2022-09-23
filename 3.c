#include<stdio.h>
int reader(FILE *pokemon,int buffer[]){
    int r;
    int n=0;
    
    // printf("%c",r);just to check that is it working
    while(r!=EOF){
        r=fgetc(pokemon);
        int i;
    if(r==','){
        for( i=0;i<=(n-1);i++){
            printf("%c",buffer[i]);

        }
        n=0;
        printf("\n");
    }
    else if(r=='\n'){
        for(i=0;i<=(n-1);i++){
            printf("%c",buffer[i]);

        }
        n=0;
        printf("\n\n");
        
    }
    else if(r==EOF){
        printf("\n\n");
    
    }
    else{
        buffer[n]=r;
        n++;
    }
    }
    printf("%c",buffer[0]);

    

}
int main(){
    FILE * pokemon;
    int N=1000;
    int buffer[N];
    pokemon=fopen("pokemon.csv","r");
    if (pokemon==NULL) perror ("Cannot open the file");
    else{
        reader(pokemon,buffer);
    }
    
    
    
}
