#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_5 = 54;                                       // Tag.BODY
    char entity_2[50];                                   // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 44;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 90; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_0] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER