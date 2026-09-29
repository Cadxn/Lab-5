#include <stdio.h>
#include <stdlib.h>
#include "string.h"

string screate(){
    string temp_string = (string)malloc(sizeof(struct stringType));
    //temp_string->data[0] = '\0';
    //temp_string->length = 0;
    return temp_string;
}

void printString(string s) {
    for(int i = 0; i < slen(s); i++){
    printf("%c",s->data[i]);
    }
}

void scopy(string s, char *cstr){
    s->length = 0;
    int i = 0;
    while(cstr[i] != '\0' && i < MAX_STRING_SIZE) {
    s->data[i] = cstr[i];
    s->length++;
    i++;
    }
}
int slen(string s){
    return s->length;
}
int scmp(string s1, string s2){

}
string scat(string dest, string src){


    return dest;
}

string sToUpper(string s){
    string temp_string = s;
    for(int i = 0; i < s->length; i++){
        if(s->data[i] >= 97 && s->data[i] <= 122){
            temp_string->data[i] = (s->data[i] - 32);
        }
    }
    return temp_string;
}
string sToLower(string s){
    string temp_string = s;
    for(int i = 0; i < s->length; i++){
        if(s->data[i] <= 90 && s->data[i] >= 65){
            temp_string->data[i] = (s->data[i] + 32);
        }
    }
    return temp_string;
}