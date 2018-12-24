#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_3[20];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 17;                           // Tag.BODY
    entity_3[entity_2] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 43;                           // Tag.BODY
    entity_7 = 66;                           // Tag.BODY
    char entity_4[55];                       // Tag.BODY
    while(entity_5 < entity_7){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = '8';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    char entity_9[44];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 41;                           // Tag.BODY
    entity_9[entity_1] = 'i';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER