#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[70];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_3 = 43;                           // Tag.BODY
    entity_2 = 89;                           // Tag.BODY
    if (entity_9 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 90;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_2] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = 24;                           // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[9];                        // Tag.BODY
    char entity_5[92];                       // Tag.BODY
    entity_4 = 14;                           // Tag.BODY
    entity_5[entity_6] = 'r';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_4] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER