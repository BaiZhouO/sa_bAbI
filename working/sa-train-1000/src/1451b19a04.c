#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_5[39];                       // Tag.BODY
    entity_8 = 29;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_7[51];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_0[79];                       // Tag.BODY
    entity_2 = 9;                            // Tag.BODY
    entity_7[entity_8] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 4;                            // Tag.BODY
    entity_9 = 51;                           // Tag.BODY
    while(entity_1 < entity_2){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'e';                // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_9] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER