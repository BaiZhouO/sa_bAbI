#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_8[88];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_5[24];                       // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_1 = 93;                           // Tag.BODY
    entity_2 = 76;                           // Tag.BODY
    if(entity_9 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 71;                           // Tag.BODY
    entity_8[entity_1] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_5[entity_9] = 'O';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char entity_6[69];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char *entity_7 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 4;                            // Tag.BODY
    entity_6[entity_4] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER