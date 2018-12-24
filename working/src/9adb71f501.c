#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 29;                           // Tag.BODY
    entity_0 = 43;                           // Tag.BODY
    char entity_5[78];                       // Tag.BODY
    if (entity_3 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 10;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_3){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'G';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char entity_4[33];                       // Tag.BODY
    char *entity_7 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 84;                           // Tag.BODY
    entity_4[entity_9] = 'k';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER