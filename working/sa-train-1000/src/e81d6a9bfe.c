#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_9[87];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4 = 98;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 27;                                       // Tag.BODY
    char entity_1[44];                                   // Tag.BODY
    entity_9[entity_6] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_0 = 44; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_7;                                        // Tag.BODY
    entity_7 = 35;                                       // Tag.BODY
    char entity_8[77];                                   // Tag.BODY
    entity_8[entity_7] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER