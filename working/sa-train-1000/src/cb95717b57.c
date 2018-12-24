#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 32;                           // Tag.BODY
    entity_5 = 26;                           // Tag.BODY
    char entity_3[8];                        // Tag.BODY
    while(entity_5 < entity_7){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char entity_4[81];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 28;                           // Tag.BODY
    entity_4[entity_8] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_6 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER