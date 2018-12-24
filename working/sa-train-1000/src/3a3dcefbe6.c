#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_5[88];                       // Tag.BODY
    char entity_9[8];                        // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_1 = 34;                           // Tag.BODY
    entity_4 = 44;                           // Tag.BODY
    entity_7 = 10;                           // Tag.BODY
    if (entity_0 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_7] = 'q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char entity_6[34];                       // Tag.BODY
    entity_3 = 61;                           // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_3] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER