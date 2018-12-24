#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_9[44];                                   // Tag.BODY
    char entity_0[71];                                   // Tag.BODY
    char entity_5[9];                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 78;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8 = 75;                                       // Tag.BODY
    entity_1 = 90;                                       // Tag.BODY
    entity_5[entity_8] = '8';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_4 = 12; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_0[entity_1] = 'd';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER