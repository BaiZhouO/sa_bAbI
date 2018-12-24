#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_5[76];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_0 = 56;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_7 = 74;                           // Tag.BODY
    if (entity_9 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 73;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_9){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_0] = 'j';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char *entity_4 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 30;                           // Tag.BODY
    char entity_8[28];                       // Tag.BODY
    entity_8[entity_1] = 'o';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER