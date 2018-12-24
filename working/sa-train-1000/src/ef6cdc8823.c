#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_1[56];                       // Tag.BODY
    entity_8 = 99;                           // Tag.BODY
    entity_6 = 68;                           // Tag.BODY
    while(entity_8 < entity_6){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_8] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_8;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char entity_9[66];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char *entity_3 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 50;                           // Tag.BODY
    entity_0 = 10;                           // Tag.BODY
    char entity_7[72];                       // Tag.BODY
    entity_7[entity_0] = 'J';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER