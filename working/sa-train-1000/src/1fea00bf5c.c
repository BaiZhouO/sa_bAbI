#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_4[47];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_6[76];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 57;                           // Tag.BODY
    entity_7 = 9;                            // Tag.BODY
    entity_2 = 79;                           // Tag.BODY
    entity_0 = 97;                           // Tag.BODY
    char entity_9[70];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if (entity_3 < entity_5){                // Tag.BODY
    entity_9[entity_0] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_3 = 27;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'V';                // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_7] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER