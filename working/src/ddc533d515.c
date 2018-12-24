#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[75];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_1 = 52;                           // Tag.BODY
    entity_0 = 56;                           // Tag.BODY
    while(entity_0 < entity_1){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER