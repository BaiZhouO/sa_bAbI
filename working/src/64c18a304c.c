#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 37;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_4 = 29;                           // Tag.BODY
    entity_1 = 19;                           // Tag.BODY
    char entity_2[29];                       // Tag.BODY
    char entity_8[25];                       // Tag.BODY
    while(entity_1 < entity_6){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_1] = 'G';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_1;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 28;                           // Tag.BODY
    entity_8[entity_4] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_5 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[75];                       // Tag.BODY
    entity_3[entity_9] = 'p';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER