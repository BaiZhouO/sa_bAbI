#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_3[36];                                   // Tag.BODY
    entity_7 = 0;                                        // Tag.BODY
    char entity_6[73];                                   // Tag.BODY
    entity_2 = 15;                                       // Tag.BODY
    for(entity_1 = 22; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = '6';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_1;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char entity_5[84];                                   // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 5;                                        // Tag.BODY
    entity_5[entity_0] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_2] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER