#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[94];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_8[71];                                   // Tag.BODY
    entity_9 = 1;                                        // Tag.BODY
    entity_4[entity_9] = 'O';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 6;                                        // Tag.BODY
    for(entity_6 = 31; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'M';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER