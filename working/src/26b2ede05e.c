#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_8[20];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = 74;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_3[18];                                   // Tag.BODY
    entity_4 = 20;                                       // Tag.BODY
    entity_6 = 92;                                       // Tag.BODY
    char entity_0[34];                                   // Tag.BODY
    if (entity_5 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 67;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 48; entity_2 < entity_5; entity_2++){ // Tag.BODY
    entity_0[entity_1] = 'v';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_8[entity_4] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER