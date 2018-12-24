#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_0 = 11;                           // Tag.BODY
    entity_8 = 44;                           // Tag.BODY
    char entity_6[42];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if (entity_9 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 21;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_9){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = 'z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char *entity_3 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[88];                       // Tag.BODY
    entity_1 = 8;                            // Tag.BODY
    entity_5[entity_1] = 'O';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER