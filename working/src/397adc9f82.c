#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[18];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 58;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_6[8];                                    // Tag.BODY
    entity_2 = 46;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 8;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 61; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_2] = 'P';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER