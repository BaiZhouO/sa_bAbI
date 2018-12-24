#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[84];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_9 = 4;                                        // Tag.BODY
    if (entity_5 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 70;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 97; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_4] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_4;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    entity_8 = 42;                                       // Tag.BODY
    char entity_6[62];                                   // Tag.BODY
    entity_6[entity_8] = 'h';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER