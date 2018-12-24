#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_3[28];                                   // Tag.BODY
    char entity_2[41];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_1 = 45;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 25;                                       // Tag.BODY
    if (entity_9 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 79;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 63; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = 'Q';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_6] = 'k';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_0;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    entity_7 = 9;                                        // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[97];                                   // Tag.BODY
    entity_5[entity_7] = 'z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER