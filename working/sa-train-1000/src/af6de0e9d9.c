#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = 21;                                       // Tag.BODY
    char entity_7[76];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 97; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_0] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_0;                                // Tag.POINTER_DEC
    char entity_3[51];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char *entity_8 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 66;                                       // Tag.BODY
    entity_3[entity_1] = 'O';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER