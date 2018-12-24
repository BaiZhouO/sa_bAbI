#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[7];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[13];                                   // Tag.BODY
    entity_9 = 29;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_1 = 47;                                       // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 10;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 98; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                                        // Tag.BODY
    char entity_4[97];                                   // Tag.BODY
    entity_0 = 92;                                       // Tag.BODY
    entity_4[entity_0] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER