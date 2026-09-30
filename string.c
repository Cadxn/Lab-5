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
    int length = 0;
    if(s1->length > s2->length){
        length = s1->length;
    } else {
        length = s2->length;
    }
    for(int i = 0; i < length; i++){
        if(s1->data[i] == s2->data[i]){

        } else if (s1->data[i] > s2->data[i]){
            return 1;
        }
        else if (s1->data[i] < s2->data[i]){
            return -1;
        }
    }
    return 0;
}
string scat(string dest, string src){
    string temp_string = dest;

    for(int i = 0; i < src->length; i++){
        temp_string->data[dest->length + i] = src->data[i];
    }

    temp_string->length += src->length;

    return temp_string;
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