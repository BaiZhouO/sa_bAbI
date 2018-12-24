#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_0 = 81;                           // Tag.BODY
    char entity_6[25];                       // Tag.BODY
    entity_9 = 88;                           // Tag.BODY
    if(entity_9 < entity_0){                 // Tag.BODY
    entity_9 = 24;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_9;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char entity_5[30];                       // Tag.BODY
    char entity_1[12];                       // Tag.BODY
    char *entity_8 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                            // Tag.BODY
    entity_3 = 71;                           // Tag.BODY
    entity_5[entity_3] = 'k';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 6;                            // Tag.BODY
    entity_1[entity_4] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER