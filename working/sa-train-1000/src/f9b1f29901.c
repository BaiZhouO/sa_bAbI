#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_1[71];                       // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_0 = 16;                           // Tag.BODY
    entity_8 = 11;                           // Tag.BODY
    if (entity_4 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 57;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_4){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = '6';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_5[0];                        // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    entity_3 = 11;                           // Tag.BODY
    char *entity_6 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 76;                           // Tag.BODY
    entity_7[entity_2] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_3] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER