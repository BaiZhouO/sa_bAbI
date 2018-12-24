#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_1[0];                        // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_7 = 74;                           // Tag.BODY
    char entity_5[58];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_8 = 37;                           // Tag.BODY
    entity_9 = 32;                           // Tag.BODY
    if (entity_0 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_9] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_8] = 'F';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER