#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[76];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_8 = 15;                                       // Tag.BODY
    for(entity_2 = 25; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'x';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                                        // Tag.BODY
    char entity_7[10];                                   // Tag.BODY
    entity_4 = 28;                                       // Tag.BODY
    entity_7[entity_4] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER