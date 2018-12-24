#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    entity_1 = 35;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[49];                                   // Tag.BODY
    for(entity_2 = 77; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER