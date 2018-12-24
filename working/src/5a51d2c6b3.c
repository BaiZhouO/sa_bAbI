#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 41;                                       // Tag.BODY
    char entity_3[2];                                    // Tag.BODY
    char entity_8[55];                                   // Tag.BODY
    entity_2 = 56;                                       // Tag.BODY
    entity_8[entity_2] = 'i';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 76;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 13; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'N';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER