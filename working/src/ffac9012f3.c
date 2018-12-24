#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_2[22];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_8[76];                                   // Tag.BODY
    entity_0 = 99;                                       // Tag.BODY
    entity_4 = 51;                                       // Tag.BODY
    char entity_9[84];                                   // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 67;                                       // Tag.BODY
    if (entity_1 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9[entity_0] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 55;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 21; entity_3 < entity_1; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = '0';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_3;                                // Tag.POINTER_DEC
    entity_2[entity_7] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER