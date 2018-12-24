#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 62;                           // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_2[88];                       // Tag.BODY
    entity_0 = 78;                           // Tag.BODY
    if (entity_7 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_7){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = '5';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char entity_6[37];                       // Tag.BODY
    char *entity_4 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 39;                           // Tag.BODY
    entity_6[entity_3] = 'v';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER