#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_7 = 3;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_1 = 67;                           // Tag.BODY
    char entity_0[53];                       // Tag.BODY
    if (entity_5 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_5){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'A';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_7;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_3 = 19;                           // Tag.BODY
    char *entity_6 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[58];                       // Tag.BODY
    entity_2[entity_3] = 'i';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER