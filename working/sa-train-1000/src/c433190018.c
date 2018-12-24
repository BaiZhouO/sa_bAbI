#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_5[64];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_6[88];                       // Tag.BODY
    entity_9 = 5;                            // Tag.BODY
    entity_2 = 95;                           // Tag.BODY
    entity_4 = 22;                           // Tag.BODY
    if (entity_7 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_7){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_9] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_2] = 'M';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER