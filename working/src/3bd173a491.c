#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[71];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[2];                                    // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_7 = 4;                                        // Tag.BODY
    entity_1 = 12;                                       // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 55;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_1] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_0 = 77; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER