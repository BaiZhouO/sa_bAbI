#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_8[60];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 12;                                       // Tag.BODY
    for(entity_1 = 20; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'i';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER