#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_7 = 79;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[61];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_9[28];                                   // Tag.BODY
    char entity_0[78];                                   // Tag.BODY
    entity_6 = 51;                                       // Tag.BODY
    entity_2 = 79;                                       // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4[entity_6] = 'b';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 17;                                       // Tag.BODY
    entity_9[entity_7] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_5 = 84; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER