#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_3[52];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 62;                                       // Tag.BODY
    for(entity_9 = 97; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_2 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER