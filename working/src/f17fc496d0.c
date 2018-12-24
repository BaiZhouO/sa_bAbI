#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_4[99];                       // Tag.BODY
    entity_9 = 79;                           // Tag.BODY
    entity_3 = 53;                           // Tag.BODY
    entity_7 = 46;                           // Tag.BODY
    char entity_0[57];                       // Tag.BODY
    if (entity_2 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0[entity_7] = 'I';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_2){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_3;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char *entity_6 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 59;                           // Tag.BODY
    char entity_5[2];                        // Tag.BODY
    entity_5[entity_8] = 'N';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER