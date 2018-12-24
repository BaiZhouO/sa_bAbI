#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_1[11];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 73;                           // Tag.BODY
    char entity_8[4];                        // Tag.BODY
    entity_9 = 58;                           // Tag.BODY
    entity_2 = 82;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if (entity_0 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 99;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_1[entity_6] = 'R';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = &entity_9;                    // Tag.POINTER_DEC
    char entity_5[38];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    char *entity_4 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 39;                           // Tag.BODY
    entity_5[entity_3] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER