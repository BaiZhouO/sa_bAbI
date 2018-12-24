#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_9[0];                        // Tag.BODY
    entity_6 = 92;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_2 = 87;                           // Tag.BODY
    if (entity_0 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 8;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_0){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_2] = 'D';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char *entity_8 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 10;                           // Tag.BODY
    char entity_5[16];                       // Tag.BODY
    entity_5[entity_4] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER