#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[30];                                   // Tag.BODY
    entity_1 = 1;                                        // Tag.BODY
    for(entity_4 = 61; entity_4 < entity_1; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER