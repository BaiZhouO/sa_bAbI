#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = 7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_5[95];                       // Tag.BODY
    entity_0 = 18;                           // Tag.BODY
    char entity_1[48];                       // Tag.BODY
    entity_4 = 90;                           // Tag.BODY
    while(entity_3 < entity_0){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = '9';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    entity_1[entity_4] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_7 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER