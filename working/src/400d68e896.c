#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[55];                                   // Tag.BODY
    entity_6 = 81;                                       // Tag.BODY
    for(entity_8 = 99; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 16;                                       // Tag.BODY
    char entity_1[72];                                   // Tag.BODY
    entity_1[entity_4] = 'A';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER