#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_1[61];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 58;                           // Tag.BODY
    entity_0 = 8;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if (entity_7 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 92;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_7){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char entity_5[16];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 1;                            // Tag.BODY
    char entity_6[76];                       // Tag.BODY
    char *entity_3 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 82;                           // Tag.BODY
    entity_6[entity_8] = 'p';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_4] = 'F';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER