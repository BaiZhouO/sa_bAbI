#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_0[74];                                   // Tag.BODY
    char entity_4[68];                                   // Tag.BODY
    entity_5 = 36;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_3 = 30;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 65;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 77; entity_2 < entity_7; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0[entity_3] = 'P';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER