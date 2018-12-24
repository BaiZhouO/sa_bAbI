#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 24;                           // Tag.BODY
    char entity_5[37];                       // Tag.BODY
    entity_4 = 45;                           // Tag.BODY
    while(entity_4 < entity_9){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char entity_7[35];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_6 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 87;                           // Tag.BODY
    entity_7[entity_1] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER