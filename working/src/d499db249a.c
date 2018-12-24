#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    entity_6 = 89;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_9[19];                                   // Tag.BODY
    for(entity_7 = 49; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_7] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                                        // Tag.BODY
    entity_4 = 18;                                       // Tag.BODY
    char entity_1[57];                                   // Tag.BODY
    entity_1[entity_4] = 'D';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER