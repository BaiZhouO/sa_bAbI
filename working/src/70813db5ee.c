#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = 86;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[53];                                   // Tag.BODY
    for(entity_1 = 40; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                                        // Tag.BODY
    entity_2 = 97;                                       // Tag.BODY
    char entity_3[20];                                   // Tag.BODY
    entity_3[entity_2] = 'h';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER