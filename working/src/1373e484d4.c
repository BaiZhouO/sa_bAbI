#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 9;                            // Tag.BODY
    char entity_2[97];                       // Tag.BODY
    entity_6 = 53;                           // Tag.BODY
    while(entity_6 < entity_9){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_6] = 's';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    char entity_3[8];                        // Tag.BODY
    entity_5 = 54;                           // Tag.BODY
    entity_3[entity_5] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER