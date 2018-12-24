#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[44];                                   // Tag.BODY
    char entity_1[85];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 83;                                       // Tag.BODY
    char entity_8[79];                                   // Tag.BODY
    entity_3 = 70;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_2 = 83;                                       // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 91; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_4] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0[entity_2] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER