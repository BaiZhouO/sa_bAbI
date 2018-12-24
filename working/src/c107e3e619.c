#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[99];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 30;                           // Tag.BODY
    if(entity_1 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 99;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char entity_7[26];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 3;                            // Tag.BODY
    entity_7[entity_9] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER