#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_7[72];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_2[29];                       // Tag.BODY
    entity_3 = 27;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 33;                           // Tag.BODY
    entity_5 = 55;                           // Tag.BODY
    while(entity_5 < entity_3){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = 'A';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_5] = 'z';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    entity_4 = 13;                           // Tag.BODY
    char entity_1[84];                       // Tag.BODY
    char *entity_6 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_4] = 'c';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER