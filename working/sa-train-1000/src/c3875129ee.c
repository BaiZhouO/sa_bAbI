#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 64;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_5 = 87;                           // Tag.BODY
    char entity_0[78];                       // Tag.BODY
    if (entity_4 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_4){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_2] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_2;                    // Tag.POINTER_DEC
    char entity_8[79];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    char *entity_3 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 67;                           // Tag.BODY
    entity_8[entity_9] = 'p';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER