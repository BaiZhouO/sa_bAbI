#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = 63;                           // Tag.BODY
    entity_1 = 74;                           // Tag.BODY
    char entity_6[13];                       // Tag.BODY
    while(entity_9 < entity_1){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_9;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    entity_7 = 28;                           // Tag.BODY
    char *entity_4 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[39];                       // Tag.BODY
    entity_8[entity_7] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER