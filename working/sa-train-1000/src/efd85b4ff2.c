#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_2[99];                                   // Tag.BODY
    entity_7 = 32;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    for(entity_6 = 81; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'O';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER