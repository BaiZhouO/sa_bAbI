#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_2[2];                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4 = 79;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    char entity_7[98];                                   // Tag.BODY
    entity_6 = 70;                                       // Tag.BODY
    if (entity_8 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 79; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_5] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_5;                                // Tag.POINTER_DEC
    entity_7[entity_4] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER