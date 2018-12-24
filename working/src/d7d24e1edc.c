#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9 = 2;                                        // Tag.BODY
    char entity_2[31];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[44];                                   // Tag.BODY
    entity_6 = 0;                                        // Tag.BODY
    for(entity_8 = 66; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_8] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_3[entity_9] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = &entity_8;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char *entity_5 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 48;                                       // Tag.BODY
    char entity_7[77];                                   // Tag.BODY
    entity_7[entity_0] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER