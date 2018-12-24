#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_7[58];                       // Tag.BODY
    entity_9 = 14;                           // Tag.BODY
    entity_0 = 88;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_1 = 6;                            // Tag.BODY
    char entity_2[65];                       // Tag.BODY
    if (entity_8 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2[entity_0] = 'W';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_8){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_9] = '6';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER