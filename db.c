#include <stdio.h>
#include <time.h>

FILE *file;
struct tm *t_st;

struct date {
    int year;
    int month;
    int day;
    int in;
    int out;
    char memo[140];    
};

void settime() {
    time_t timer;
    time(&timer);
    t_st = localtime(&timer);
    //printf("%s",ctime(&timer)); 
}


int init(char path[],char mode[]) {
    file = fopen(path,mode);
    settime();
    /*
    fprintf(file,"Hello,world");
	fclose(file);
	*/
    return 1;
}

int adddb(int in,int out,char memo[140]){
    
    return in;
}

