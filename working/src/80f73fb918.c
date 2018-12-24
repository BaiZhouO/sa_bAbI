#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[86];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 4;                                        // Tag.BODY
    char entity_5[87];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 10;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1[entity_4] = 'W';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_2 = 37; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                                        // Tag.BODY
    entity_9 = 48;                                       // Tag.BODY
    char entity_3[76];                                   // Tag.BODY
    entity_3[entity_9] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER