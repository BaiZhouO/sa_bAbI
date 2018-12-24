#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 65;                           // Tag.BODY
    entity_1 = 99;                           // Tag.BODY
    char entity_9[13];                       // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    char *entity_6 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                            // Tag.BODY
    entity_3 = 23;                           // Tag.BODY
    char entity_5[14];                       // Tag.BODY
    entity_5[entity_3] = '9';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 84;                           // Tag.BODY
    entity_7[entity_0] = 'f';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER