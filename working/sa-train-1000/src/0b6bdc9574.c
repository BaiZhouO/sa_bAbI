#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[92];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_1 = 34;                           // Tag.BODY
    entity_7 = 48;                           // Tag.BODY
    while(entity_7 < entity_1){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = '8';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 85;                           // Tag.BODY
    char entity_4[75];                       // Tag.BODY
    entity_4[entity_2] = 'q';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER