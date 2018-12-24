#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_3[11];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_8 = 2;                                        // Tag.BODY
    char entity_2[16];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    if (entity_1 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 49;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 97; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2[entity_8] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER