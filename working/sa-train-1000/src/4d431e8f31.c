#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[64];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_7 = 18;                                       // Tag.BODY
    if (entity_2 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 55;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 22; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'n';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER