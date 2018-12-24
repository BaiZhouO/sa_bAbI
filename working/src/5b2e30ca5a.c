#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[79];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_8[75];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_7 = 2;                            // Tag.BODY
    entity_2 = 50;                           // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    while(entity_7 < entity_2){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    entity_9[entity_1] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_8[entity_7] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                            // Tag.BODY
    entity_3 = 91;                           // Tag.BODY
    char entity_6[74];                       // Tag.BODY
    entity_6[entity_3] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER