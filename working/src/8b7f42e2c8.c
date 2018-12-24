#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[99];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 27;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_6[18];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_9 = 60;                           // Tag.BODY
    entity_2 = 38;                           // Tag.BODY
    if (entity_0 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 29;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_9] = 'u';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_9;                    // Tag.POINTER_DEC
    entity_6[entity_2] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[57];                       // Tag.BODY
    char *entity_1 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                            // Tag.BODY
    entity_3 = 58;                           // Tag.BODY
    entity_4[entity_3] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER