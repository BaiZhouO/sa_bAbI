#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_1[14];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 80;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_9 = 38;                           // Tag.BODY
    if (entity_6 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_6){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = 'j';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_2;                    // Tag.POINTER_DEC
    char entity_7[35];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    char *entity_5 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 80;                           // Tag.BODY
    entity_7[entity_3] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER