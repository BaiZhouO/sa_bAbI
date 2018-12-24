#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_8[8];                                    // Tag.BODY
    entity_0 = 92;                                       // Tag.BODY
    entity_5 = 40;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[32];                                   // Tag.BODY
    for(entity_1 = 12; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_1] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_1;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char entity_4[30];                                   // Tag.BODY
    entity_7 = 42;                                       // Tag.BODY
    entity_4[entity_7] = '0';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_3 = (char *)(entity_6 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER