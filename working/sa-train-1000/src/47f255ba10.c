#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_1[85];                       // Tag.BODY
    entity_6 = 77;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if(entity_2 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 50;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = 'u';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER