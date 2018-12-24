#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_6[62];                                   // Tag.BODY
    char entity_8[24];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = 78;                                       // Tag.BODY
    entity_9 = 57;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 91; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_5] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    entity_8[entity_9] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_2;                                        // Tag.BODY
    char entity_7[86];                                   // Tag.BODY
    char *entity_3 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 67;                                       // Tag.BODY
    entity_7[entity_2] = 'N';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER