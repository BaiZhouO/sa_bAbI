#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_2 = 53;                           // Tag.BODY
    char entity_1[89];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_9[72];                       // Tag.BODY
    entity_8 = 42;                           // Tag.BODY
    entity_7 = 20;                           // Tag.BODY
    while(entity_8 < entity_7){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    entity_9[entity_2] = 'N';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_1[entity_8] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_8;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_3 = 20;                           // Tag.BODY
    char *entity_6 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[89];                       // Tag.BODY
    entity_4[entity_3] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER