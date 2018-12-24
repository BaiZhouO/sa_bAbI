#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_6[70];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 20;                                       // Tag.BODY
    for(entity_4 = 89; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_4] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER