#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 48;                                       // Tag.BODY
    char entity_9[14];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[95];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 61;                                       // Tag.BODY
    entity_4 = 28;                                       // Tag.BODY
    char entity_6[72];                                   // Tag.BODY
    if (entity_7 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 89;                                       // Tag.BODY
    entity_6[entity_1] = 'P';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_0 = 63; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_4] = '3';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_0] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER