#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_9[42];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_6[15];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_4 = 60;                                       // Tag.BODY
    entity_3 = 79;                                       // Tag.BODY
    if (entity_7 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 24;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 51; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_0;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    entity_9[entity_4] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_1 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 28;                                       // Tag.BODY
    char entity_5[76];                                   // Tag.BODY
    entity_5[entity_2] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER