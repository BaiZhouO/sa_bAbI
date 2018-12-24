#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[82];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8 = 61;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_5 = 63;                                       // Tag.BODY
    char entity_0[9];                                    // Tag.BODY
    if (entity_6 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 81;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 30; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_1;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    entity_3[entity_5] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[44];                                   // Tag.BODY
    entity_7 = 66;                                       // Tag.BODY
    entity_4[entity_7] = 'p';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_9 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER