#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_0 = 53;                                       // Tag.BODY
    char entity_3[37];                                   // Tag.BODY
    for(entity_4 = 47; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_4] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_4;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[9];                                    // Tag.BODY
    entity_2 = 16;                                       // Tag.BODY
    entity_9 = 31;                                       // Tag.BODY
    entity_6[entity_2] = 'q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_8[10];                                   // Tag.BODY
    entity_8[entity_9] = 's';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER