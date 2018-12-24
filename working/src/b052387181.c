#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    entity_0 = 82;                                       // Tag.BODY
    char entity_5[71];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    for(entity_4 = 14; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER