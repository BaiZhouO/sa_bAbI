#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_7[24];                                   // Tag.BODY
    entity_2 = 47;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 43; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER