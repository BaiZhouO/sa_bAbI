#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_7[58];                       // Tag.BODY
    entity_0 = 3;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_9 = 64;                           // Tag.BODY
    char entity_5[32];                       // Tag.BODY
    entity_4 = 2;                            // Tag.BODY
    entity_3 = 79;                           // Tag.BODY
    char entity_6[75];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_7[entity_9] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_8 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 23;                           // Tag.BODY
    entity_6[entity_0] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    while(entity_3 < entity_8){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = 'A';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER