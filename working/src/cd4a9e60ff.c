#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[6];                                    // Tag.BODY
    char entity_8[52];                                   // Tag.BODY
    entity_0 = 56;                                       // Tag.BODY
    entity_5 = 72;                                       // Tag.BODY
    for(entity_9 = 98; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_0] = '3';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER