#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_8[7];                                    // Tag.BODY
    char entity_0[64];                                   // Tag.BODY
    entity_2 = 8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8[entity_2] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 28;                                       // Tag.BODY
    for(entity_5 = 90; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                                        // Tag.BODY
    char entity_9[60];                                   // Tag.BODY
    entity_6 = 67;                                       // Tag.BODY
    entity_9[entity_6] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER