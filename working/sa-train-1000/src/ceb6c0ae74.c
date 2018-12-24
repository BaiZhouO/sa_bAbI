#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_8[30];                                   // Tag.BODY
    entity_7 = 31;                                       // Tag.BODY
    for(entity_3 = 22; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_3;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    entity_2 = 13;                                       // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[76];                                   // Tag.BODY
    entity_6[entity_2] = 'D';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER