#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_4[28];                       // Tag.BODY
    entity_7 = 28;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 33;                           // Tag.BODY
    while(entity_2 < entity_7){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 53;                           // Tag.BODY
    char entity_8[48];                       // Tag.BODY
    entity_8[entity_6] = 's';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER