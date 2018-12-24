#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_0[32];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 34;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_1 = 87;                           // Tag.BODY
    if (entity_9 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 85;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_9){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_1;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_7[63];                       // Tag.BODY
    entity_2 = 25;                           // Tag.BODY
    char entity_5[49];                       // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_2] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 7;                            // Tag.BODY
    entity_5[entity_3] = 'Y';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER