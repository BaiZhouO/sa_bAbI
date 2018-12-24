#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_7[12];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_1[80];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_2 = 54;                           // Tag.BODY
    entity_0 = 22;                           // Tag.BODY
    char entity_9[83];                       // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    entity_5 = 59;                           // Tag.BODY
    while(entity_3 < entity_5){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'W';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_0] = 'x';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_2] = 'Y';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER