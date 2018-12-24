#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_4[71];                                   // Tag.BODY
    entity_0 = 41;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_6 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 86;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 10; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_8;                                // Tag.POINTER_DEC
    int entity_1;                                        // Tag.BODY
    char entity_3[67];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 74;                                       // Tag.BODY
    entity_5 = 81;                                       // Tag.BODY
    entity_3[entity_1] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_9[46];                                   // Tag.BODY
    entity_9[entity_5] = 'J';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER