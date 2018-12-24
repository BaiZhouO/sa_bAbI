#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_8[0];                        // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_0 = 41;                           // Tag.BODY
    char entity_7[88];                       // Tag.BODY
    char entity_3[27];                       // Tag.BODY
    entity_6 = 78;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_5 = 28;                           // Tag.BODY
    entity_1 = 99;                           // Tag.BODY
    if (entity_2 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7[entity_1] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 87;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_2){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'Z';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_0] = 'g';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER