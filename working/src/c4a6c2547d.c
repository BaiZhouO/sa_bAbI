#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[20];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 8;                                        // Tag.BODY
    for(entity_6 = 55; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER