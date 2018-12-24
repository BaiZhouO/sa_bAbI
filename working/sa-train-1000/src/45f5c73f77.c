#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[94];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[48];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = 88;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = 12;                                       // Tag.BODY
    entity_9 = 43;                                       // Tag.BODY
    char entity_7[34];                                   // Tag.BODY
    entity_5[entity_2] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8[entity_1] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 66;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 46; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER