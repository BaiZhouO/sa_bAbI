#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_7[75];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_2[82];                       // Tag.BODY
    entity_6 = 64;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_4 = 10;                           // Tag.BODY
    entity_8 = 76;                           // Tag.BODY
    if (entity_1 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_1){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = '6';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_8] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[46];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 85;                           // Tag.BODY
    entity_3[entity_0] = '6';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER