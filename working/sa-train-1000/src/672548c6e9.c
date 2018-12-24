#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_2 = 87;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_4[94];                       // Tag.BODY
    entity_5 = 87;                           // Tag.BODY
    if (entity_9 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = '7';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_2;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    entity_0 = 97;                           // Tag.BODY
    char entity_3[65];                       // Tag.BODY
    entity_3[entity_0] = 'e';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_8 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER