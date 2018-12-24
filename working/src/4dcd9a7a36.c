#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_8[30];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 20;                                       // Tag.BODY
    if (entity_6 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 80;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 15; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER