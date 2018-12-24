#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[54];                                   // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_6 = 27;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    if (entity_5 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 65;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 76; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_2] = '8';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER