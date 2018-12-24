#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_5[81];                                   // Tag.BODY
    entity_3 = 27;                                       // Tag.BODY
    for(entity_8 = 17; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = '4';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER