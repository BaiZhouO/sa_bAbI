#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    entity_5 = 18;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 3;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_8[14];                       // Tag.BODY
    char entity_9[97];                       // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    entity_8[entity_7] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_5 < entity_1){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER