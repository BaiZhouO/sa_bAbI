#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_0[41];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 98;                           // Tag.BODY
    entity_9 = 63;                           // Tag.BODY
    while(entity_1 < entity_9){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 59;                           // Tag.BODY
    entity_4 = 93;                           // Tag.BODY
    char *entity_3 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[87];                       // Tag.BODY
    entity_5[entity_4] = '9';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_6[72];                       // Tag.BODY
    entity_6[entity_8] = 'D';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER