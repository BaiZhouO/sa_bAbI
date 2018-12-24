#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_6 = 16;                           // Tag.BODY
    char entity_0[74];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    char entity_3[13];                       // Tag.BODY
    entity_3[entity_6] = '9';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 0;                            // Tag.BODY
    entity_7 = 38;                           // Tag.BODY
    entity_5 = 51;                           // Tag.BODY
    char entity_4[23];                       // Tag.BODY
    if (entity_8 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_8){              // Tag.BODY
    entity_4[entity_1] = '3';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_5] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER