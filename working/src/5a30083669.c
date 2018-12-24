#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_5[52];                       // Tag.BODY
    char entity_7[96];                       // Tag.BODY
    char entity_8[59];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_2 = 85;                           // Tag.BODY
    entity_4 = 17;                           // Tag.BODY
    entity_1 = 94;                           // Tag.BODY
    entity_6 = 38;                           // Tag.BODY
    entity_7[entity_4] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    if (entity_3 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5[entity_6] = 'G';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER