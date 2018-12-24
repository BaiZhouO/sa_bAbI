#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_2[61];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[76];                                   // Tag.BODY
    entity_1 = 38;                                       // Tag.BODY
    entity_9 = 38;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 81;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 77; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_5] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_1] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_5;                                // Tag.POINTER_DEC
    char entity_0[80];                                   // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                                        // Tag.BODY
    entity_3 = 52;                                       // Tag.BODY
    entity_0[entity_3] = 'A';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER