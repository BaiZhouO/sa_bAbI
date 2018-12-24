#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_0[65];                                   // Tag.BODY
    entity_9 = 76;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_5 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 96;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 45; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_3] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[70];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    entity_8[entity_6] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER