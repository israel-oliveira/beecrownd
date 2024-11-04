// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

void isVertebrado(char pp[20], char sp[20]){
    if(strcmp(pp, "ave") == 0){
        if(strcmp(sp,"carnivoro") == 0){
            printf("aguia\n");
        }else{
            printf("pomba\n");
        }
    }else{
        if(strcmp(sp,"onivoro") == 0){
            printf("homem\n");
        }else{
            printf("vaca\n");
        }
    }
}

void isInvertebrado(char pp[20], char sp[20]){
    if(strcmp(pp, "inseto") == 0){
        if(strcmp(sp,"hematofago") == 0){
            printf("pulga\n");
        }else{
            printf("lagarta\n");
        }
    }else{
        if(strcmp(sp,"hematofago") == 0){
            printf("sanguessuga\n");
        }else{
            printf("minhoca\n");
        }
    }
}

int main() {
    char p1[20], p2[20], p3[20];
    
    scanf("%s", &p1);
    scanf("%s", &p2);
    scanf("%s", &p3);
    
    if(strcmp(p1,"vertebrado") == 0){
        isVertebrado(p2, p3);
    }else{
        isInvertebrado(p2, p3);
    }
    

    return 0;
}
