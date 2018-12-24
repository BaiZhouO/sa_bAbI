#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 26;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_9[43];                       // Tag.BODY
    entity_1 = 89;                           // Tag.BODY
    entity_5 = 19;                           // Tag.BODY
    char entity_8[41];                       // Tag.BODY
    while(entity_1 < entity_5){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_6] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER