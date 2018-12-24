#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = 14;                                       // Tag.BODY
    char entity_1[72];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 2;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 36; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = '2';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER