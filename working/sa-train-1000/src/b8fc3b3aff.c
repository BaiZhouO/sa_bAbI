#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 34;                           // Tag.BODY
    char entity_3[51];                       // Tag.BODY
    entity_2 = 10;                           // Tag.BODY
    while(entity_2 < entity_4){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'z';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    char entity_0[0];                        // Tag.BODY
    entity_5 = 18;                           // Tag.BODY
    entity_0[entity_5] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER