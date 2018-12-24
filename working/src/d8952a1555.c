#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_2 = 90;                                       // Tag.BODY
    char entity_8[47];                                   // Tag.BODY
    if (entity_5 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 86; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER