#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    entity_2 = 61;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_1[19];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if(entity_3 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 99;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_3] = 'e';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER