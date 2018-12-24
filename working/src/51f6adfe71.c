#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[20];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 81;                                       // Tag.BODY
    for(entity_4 = 22; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_4;                                // Tag.POINTER_DEC
    char entity_2[7];                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char *entity_0 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 80;                                       // Tag.BODY
    entity_2[entity_7] = 'm';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER