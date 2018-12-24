#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_2[6];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    entity_6 = 28;                           // Tag.BODY
    entity_2[entity_3] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_0[63];                       // Tag.BODY
    entity_1 = 49;                           // Tag.BODY
    entity_9 = 2;                            // Tag.BODY
    char entity_8[79];                       // Tag.BODY
    if (entity_4 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 67;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_4){              // Tag.BODY
    entity_8[entity_6] = 'w';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER