#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "AA_list.h"
int GetRandom(int min, int max);
char *words[4] = {"進捗", "どう", "です", "か"};
int main(void) {
    int next_id = 0;
    int rand_id;
    while (next_id != 4) {
        rand_id = GetRandom(0, 3);
        printf("%s", words[rand_id]);
        if (next_id == rand_id) {
            next_id += 1;
        } else {
            next_id = 0;
        }
    }
    printf("?????\n");
    printf("%s\n",
    AA_array[GetRandom(0, (int)(sizeof(AA_array) / sizeof(AA_array[0]) ) - 2) ] );

    return 0;
}


int GetRandom(int min, int max){
    static bool flag = false;
    if (!flag) {
        srand((unsigned int)time(NULL) );
        flag = true;
    }
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX) );
}
