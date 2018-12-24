#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[99];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 45;                                       // Tag.BODY
    for(entity_6 = 85; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'y';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_6;                                // Tag.POINTER_DEC
    char entity_1[2];                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 8;                                        // Tag.BODY
    entity_1[entity_8] = 'Q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER