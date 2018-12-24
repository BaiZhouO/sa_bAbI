#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_8[10];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = 86;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_2[94];                       // Tag.BODY
    entity_0 = 57;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    if (entity_4 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 35;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_4){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_6] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_0] = 'S';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    char entity_5[63];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char *entity_1 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 65;                           // Tag.BODY
    entity_5[entity_7] = 'o';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER