#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    entity_0 = 29;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[57];                                   // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[54];                                   // Tag.BODY
    entity_8 = 52;                                       // Tag.BODY
    if (entity_1 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 66;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 54; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_5;                                // Tag.POINTER_DEC
    char entity_2[48];                                   // Tag.BODY
    entity_4[entity_0] = '4';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_7;                                        // Tag.BODY
    entity_7 = 86;                                       // Tag.BODY
    entity_2[entity_7] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER