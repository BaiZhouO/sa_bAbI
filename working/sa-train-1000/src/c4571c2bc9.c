#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = 54;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 0;                            // Tag.BODY
    char entity_5[0];                        // Tag.BODY
    while(entity_9 < entity_3){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_9] = 'A';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char entity_0[81];                       // Tag.BODY
    char *entity_1 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 90;                           // Tag.BODY
    entity_0[entity_2] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER