#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[67];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_9[78];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_8 = 1;                            // Tag.BODY
    entity_5 = 26;                           // Tag.BODY
    entity_4 = 31;                           // Tag.BODY
    entity_0[entity_4] = 'S';                // Tag.BUFWRITE_TAUT_SAFE
    if (entity_7 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 87;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_7){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_8] = '5';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_2 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[53];                       // Tag.BODY
    entity_3 = 91;                           // Tag.BODY
    entity_6[entity_3] = 'B';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER