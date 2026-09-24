#define MAX_STRING_SIZE 128 // arbitrary
typedef struct stringType *string;

struct stringType {
// your definitions go here (you will only need 2 fields - one
// to keep track of the length, the other a char array of
// MAX_STRING_SIZE length. To make things easier just define your
// data field as a char array in your structure - you will not
// need to malloc it in screate at runtime!)
};

string screate(); // returns a newly created string
void scopy(string s,char *c);// copies a null-terminated C string c to s
int slen(string); // returns the length of a string
void printString(string); // prints a string to standard output w/o newline