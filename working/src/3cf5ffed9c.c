#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 57;                                       // Tag.BODY
    char entity_4[37];                                   // Tag.BODY
    for(entity_1 = 15; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_1] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER