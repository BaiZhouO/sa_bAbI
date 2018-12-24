#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_3 = 16;                           // Tag.BODY
    char entity_5[54];                       // Tag.BODY
    entity_8 = 9;                            // Tag.BODY
    while(entity_8 < entity_3){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = '3';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_8;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char entity_9[4];                        // Tag.BODY
    char *entity_1 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 90;                           // Tag.BODY
    entity_9[entity_6] = 'J';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER