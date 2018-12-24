#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_1 = 95;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    char entity_9[43];                       // Tag.BODY
    entity_0 = 52;                           // Tag.BODY
    if (entity_5 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 5;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_5){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_0] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    entity_4 = 76;                           // Tag.BODY
    char entity_8[88];                       // Tag.BODY
    entity_8[entity_4] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER