#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_4[44];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_3[42];                       // Tag.BODY
    entity_2 = 77;                           // Tag.BODY
    entity_9 = 41;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 77;                           // Tag.BODY
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    entity_4[entity_9] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_3[entity_8] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER