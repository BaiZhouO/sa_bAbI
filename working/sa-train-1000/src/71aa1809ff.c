#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_5 = 29;                                       // Tag.BODY
    char entity_8[54];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_4 = 3;                                        // Tag.BODY
    char entity_3[8];                                    // Tag.BODY
    char entity_6[74];                                   // Tag.BODY
    entity_6[entity_5] = 'p';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 84;                                       // Tag.BODY
    if (entity_9 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 50;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = '3';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_0 = 57; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER