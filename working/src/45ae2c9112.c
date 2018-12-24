#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[27];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 38;                                       // Tag.BODY
    for(entity_3 = 95; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_3;                                // Tag.POINTER_DEC
    int entity_1;                                        // Tag.BODY
    char entity_2[80];                                   // Tag.BODY
    entity_1 = 22;                                       // Tag.BODY
    entity_2[entity_1] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_9 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER