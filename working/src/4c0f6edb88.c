#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[3];                                    // Tag.BODY
    entity_8 = 85;                                       // Tag.BODY
    for(entity_5 = 68; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER