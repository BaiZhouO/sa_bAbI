#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_9[90];                                   // Tag.BODY
    char entity_4[29];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 39;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9[entity_0] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 57;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 5;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 10; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER