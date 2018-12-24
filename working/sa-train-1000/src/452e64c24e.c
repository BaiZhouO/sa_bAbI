#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    entity_1 = 66;                                       // Tag.BODY
    char entity_9[52];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    for(entity_2 = 51; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER