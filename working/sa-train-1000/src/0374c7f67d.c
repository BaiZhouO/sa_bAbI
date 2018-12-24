#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_1[64];                       // Tag.BODY
    char entity_8[10];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_6 = 97;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_0 = 21;                           // Tag.BODY
    entity_2 = 2;                            // Tag.BODY
    if (entity_7 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_6 < entity_7){              // Tag.BODY
    entity_8[entity_0] = 'f';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER