#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[37];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_1[63];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_0 = 49;                                       // Tag.BODY
    entity_8 = 84;                                       // Tag.BODY
    if (entity_7 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 94;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 61; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9[entity_0] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER