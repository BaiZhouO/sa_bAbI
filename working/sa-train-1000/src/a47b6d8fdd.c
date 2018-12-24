#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_8[88];                                   // Tag.BODY
    char entity_1[31];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_2[69];                                   // Tag.BODY
    entity_5 = 66;                                       // Tag.BODY
    entity_4 = 40;                                       // Tag.BODY
    entity_6 = 52;                                       // Tag.BODY
    entity_2[entity_6] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_0;                                        // Tag.BODY
    entity_8[entity_5] = 'N';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_0 = 44; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER