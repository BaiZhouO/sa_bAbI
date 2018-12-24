#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[91];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 15;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 37;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 46; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_7] = 'D';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_1 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER