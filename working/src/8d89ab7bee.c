#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_4[33];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_6 = 87;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_9[29];                                   // Tag.BODY
    entity_8 = 91;                                       // Tag.BODY
    if (entity_7 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 15;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 56; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_9[entity_8] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    char entity_5[54];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 79;                                       // Tag.BODY
    entity_5[entity_2] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_1 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER