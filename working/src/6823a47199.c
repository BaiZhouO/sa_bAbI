#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    entity_7 = 27;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_0[32];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_3[26];                                   // Tag.BODY
    char entity_8[52];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = 69;                                       // Tag.BODY
    entity_6 = 75;                                       // Tag.BODY
    for(entity_5 = 51; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_6] = 'Z';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_5] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_7] = 'p';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER