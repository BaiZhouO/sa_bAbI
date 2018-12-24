#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_6[64];                                   // Tag.BODY
    entity_4 = 91;                                       // Tag.BODY
    if (entity_2 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 99;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 72; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER