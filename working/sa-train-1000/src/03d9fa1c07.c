#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_0[66];                                   // Tag.BODY
    char entity_7[65];                                   // Tag.BODY
    entity_1 = 56;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 78;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 10; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'A';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    char entity_3[3];                                    // Tag.BODY
    entity_0[entity_2] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_8 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 32;                                       // Tag.BODY
    entity_3[entity_9] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER