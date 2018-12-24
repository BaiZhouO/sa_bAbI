#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_3[95];                       // Tag.BODY
    entity_8 = 18;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_1 = 92;                           // Tag.BODY
    char entity_4[60];                       // Tag.BODY
    entity_2 = 31;                           // Tag.BODY
    entity_4[entity_2] = 'q';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_1 < entity_8){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_1] = 'Q';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER